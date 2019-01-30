#include "GFX_SDL.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

//SDL2 includes
#include <SDL.h>
#include <SDL_ttf.h>

//Cannot find a way to determine the pixels in terms of the canvas, other than using constants.
//This will have to do for now until we find another way.
#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

SDL_Window * _WINDOW;	//The actual window we will be using to display graphics
SDL_Renderer * _PAINTER;	//The renderer that will spit draw the objects and stuff on screen, within the window above.
SDL_Surface * _CANVAS;	//This canvas will be what we will be drawing on within the window above.
SDL_Texture * _TEXTURE;	//This is the GPU side of the drawings. The painter cannot directly draw on screen, the object must first be rendered within the GPU before it can be placed on screen.

GFX_SDL::GFX_SDL()
{
	//Screen_height and screen_width are set to 640x480 by default


	//VERY IMPORTANT: Ensure SDL2 is initialized
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "could not initialize sdl2: %s\n", SDL_GetError());
	}

	//VERY IMPORTANT: if using text in your program, ensure SDL2_ttf library is initialized
	if (TTF_Init() < 0)
	{
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "could not initialize SDL2_ttf: %s\n", TTF_GetError());
	}

	//This creates the actual window in which graphics are displayed
	_WINDOW = SDL_CreateWindow(
		"Canvas",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		SCREEN_WIDTH, SCREEN_HEIGHT,
		SDL_WINDOW_SHOWN
	);

	//Check for errors: window will be NULL if there was a problem
	if (_WINDOW == NULL) {
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "could not create window: %s\n", SDL_GetError());
	}

	//A window by itself can't do many useful things.  We need a renderer so that we can paint in this window.
	//Think of a renderer like a paint brush.
	//First, let's instantiate a renderer in the window using the system's preferred graphics API.
	_PAINTER = SDL_CreateRenderer(_WINDOW, -1, 0); //the "0" lets the SDL2 choose what's best.

	if (_PAINTER == NULL) {
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "could not create renderer: %s\n", SDL_GetError());
	}

	//OK, now we have the window and the rendering context.
	//Let's create our virtual "canvas" that we'll use to paint on.
	//This will live entirely on the CPU, and is stored in an SDL_Surface.
	//SDL_Surfaces are always CPU-only objects.
	//Note that we are requesting an RGBA8 surface.
	_CANVAS = SDL_CreateRGBSurfaceWithFormat(0, SCREEN_WIDTH, SCREEN_HEIGHT, 32, SDL_PIXELFORMAT_RGBA8888);
	if (_CANVAS == NULL) {
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "could not create surface: %s\n", SDL_GetError());
	}

	//Unfortunately, we can't output CPU surfaces directly to the window with the renderer.  We have to copy
	//it over first.  Create a texture on the GPU that will receive our rendered images.  Consider it to be the GPU
	//side of our canvas.
	//The pixel format should be in agreement with the surface given.
	_TEXTURE = SDL_CreateTexture(_PAINTER, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STREAMING,
		SCREEN_WIDTH, SCREEN_HEIGHT);
	//SDL_TEXTUREACCESS_STREAMING allows the texture to be streamed from the CPU.

	if (_TEXTURE == NULL)
	{
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "could not create texture: %s\n", SDL_GetError());
	}


	// Just in case you need text:
	// load iosevka-regular.ttf at a large size into font
	TTF_Font* font = TTF_OpenFont("iosevka-regular.ttf", 64);
	if (!font) {
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "TTF_OpenFont: %s\n", TTF_GetError());
	}
}
GFX_SDL::~GFX_SDL()
{
	//Tell SDL to close everything.
	SDL_Quit();
}

unsigned long GFX_SDL::createRGBA(unsigned int r, unsigned int g, unsigned int b, unsigned int a)
{
	return ((r & 0xff) << 24) + ((g & 0xff) << 16) + ((b & 0xff) << 8) + (a & 0xff);
}
unsigned long GFX_SDL::createRGB(unsigned int r, unsigned int g, unsigned int b)
{
	return ((r & 0xff) << 16) + ((g & 0xff) << 8) + (b & 0xff);
}

void GFX_SDL::CanvisClear(void) {

	//Paint the entire canvas white
	for (int i = 0; i < SCREEN_WIDTH; i++) {
		for (int j = 0; j < SCREEN_HEIGHT; j++) {
			DrawPixel(i, j, 255, 255, 255, 255);
		}
	}

	//Render to screen
	CanvisRender();
}
void GFX_SDL::CanvisRender(void) {

	//Now that we have painted a complete picture, we're ready to display the results to the user.
	//Copy our software-rendered canvas over to the GPU using the texture we created.
	SDL_UpdateTexture(_TEXTURE, NULL, _CANVAS->pixels, _CANVAS->pitch);

	//Now draw this directly to the window
	SDL_RenderCopy(_PAINTER, _TEXTURE, NULL, NULL);

	//And ask the windowing system to redraw the window
	SDL_RenderPresent(_PAINTER);

}

//Draws a pixel on the screen with color.
//Must call CanvisRender after rendering image on gpu
void GFX_SDL::DrawPixel(int x, int y, unsigned int r, unsigned int g, unsigned int b, unsigned int a) {

	//Define _PIXELS in terms of the Canvas
	uint32_t(*_PIXELS)[SCREEN_WIDTH] = (uint32_t(*)[SCREEN_WIDTH]) _CANVAS->pixels;

	//Check if the colors provided are proper
	if (r > 255 || r < 0 && g > 255 || g < 0 && b > 255 || b < 0 && a > 255 || a < 0) {
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "cannot draw pixel: colors must be between 0 and 255\n");
	}

	//Set the color in HEX format
	unsigned long color = createRGBA(r, g, b, a);

	//Check if the pixel is going to be outside the bounds of the canvas
	if (x > 0 && y > 0) {
		//x and y are above 0,0 (perfect)
		if (x < SCREEN_WIDTH && y < SCREEN_HEIGHT) {
			//Coordinates look good, print the pixel


			//x and y need to be reversed for some reason. Still unclear why.
			_PIXELS[y][x] = color;
		}
	}
	
}
void GFX_SDL::DrawLine(int startX, int startY, int endX, int endY, int translationX, int translationY, unsigned int r, unsigned int g, unsigned int b, unsigned int a) {

	//Find the slope M
	float m = ((float)endY - (float)startY) / ((float)endX - (float)startX);

	//New Y intercept
	float y = endY - (m * endX);

	//Determine what direction we are drawing in.
	//Are we moving left or right?
	if (startX > endX) {
		//We are moving right
		for (int x = startX; x < endX; x++) {

			//Create a new Y coordinate based on X
			float tmp = (m * x) + y;

			//Add Translations
			int new_x = x + translationX;
			int new_y = (int)tmp + translationY;

			//Draw the pixel
			DrawPixel(new_x, new_y, r, g, b, a);
		}
	}
	else {
		//We are moving left
		for (int x = startX; x > endX; x--) {

			//Create a new Y coordinate based on X
			float tmp = (m * x) + y;

			//Add Translations
			int new_x = x + translationX;
			int new_y = (int)tmp + translationY;

			//Draw the pixel
			DrawPixel(new_x, new_y, r, g, b, a);
		}
	}
}
void GFX_SDL::DrawCircle(int startX, int startY, int radius, int color) {

	//Define _PIXELS in terms of the Canvas
	uint32_t(*_PIXELS)[SCREEN_WIDTH] = (uint32_t(*)[SCREEN_WIDTH]) _CANVAS->pixels;

}
void GFX_SDL::FillCircle(int startX, int startY, int radius, int color) {

	//Define _PIXELS in terms of the Canvas
	uint32_t(*_PIXELS)[SCREEN_WIDTH] = (uint32_t(*)[SCREEN_WIDTH]) _CANVAS->pixels;

}
void GFX_SDL::DrawRectangle(int startX, int startY, int startW, int startH, int endX, int endY, int endW, int endH) {


}
void GFX_SDL::FillRectangle(int startX, int startY, int endX, int endY,  int r,  int g,  int b) {

	//Define _PIXELS in terms of the Canvas
	uint32_t(*_PIXELS)[SCREEN_WIDTH] = (uint32_t(*)[SCREEN_WIDTH]) _CANVAS->pixels;

	//Check if the colors provided are proper
	if (r > 255 || r < 0 && g > 255 || g < 0 && b > 255 || b < 0) {
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "cannot draw pixel: colors must be between 0 and 255\n");
	}

	//OK, now we're all set to start rendering.  Let's paint a white background.
	//FillRect essentially fills a rectangle of pixels with a solid colour for us.
	SDL_FillRect(_CANVAS, NULL, SDL_MapRGB(_CANVAS->format, (r & 0xff), (g & 0xff), (b & 0xff)));
}
int GFX_SDL::GetScreenHeight() {
	const int a = SCREEN_HEIGHT;
	return a;
}
int GFX_SDL::GetScreenWidth() {
	const int a = SCREEN_WIDTH;
	return a;
}