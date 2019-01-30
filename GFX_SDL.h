#pragma once
#ifndef GFX_SDL_H
#define GFX_SDL_H

ref class GFX_SDL
{
protected:

private:

public:
	GFX_SDL();		//Constructor
	virtual ~GFX_SDL();		//Deconstructor

	//Mutators
	void CanvisClear();
	void CanvisRender();
	void DrawPixel(int, int, unsigned int, unsigned int, unsigned int, unsigned int);
	void DrawLine(int startX, int startY, int endX, int endY, int translationX, int translationY, unsigned int r, unsigned int g, unsigned int b, unsigned int a);
	void DrawCircle(int, int, int, int);
	void FillCircle(int, int, int, int);
	void DrawRectangle(int, int, int, int, int, int, int, int);
	void FillRectangle(int, int, int, int, int, int, int);

	unsigned long createRGBA(unsigned int, unsigned int, unsigned int, unsigned int);
	unsigned long createRGB(unsigned int, unsigned int, unsigned int);

	//Accessors
	int GetScreenHeight();
	int GetScreenWidth();


};

#endif