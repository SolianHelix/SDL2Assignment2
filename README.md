# COMP3520 Assignment 2

This assignment was to create a simple C/C++ program to showcase the power of the SDL2 library, and to create my own functional objects in the process. This program has two aspects; the canvas, and the user interface.

Canvas
---

This is the easier of the two, so lets start with the canvas. Using the SDL2 library, a 640x480 window was created. A blank white window will appear, and anything that you draw from within the user interface will appear on here, in the color you've chosen. The starting coordinates for the canvas (0, 0) are located in the top left corner, instead of the center. This poses some challanges with how the graph works, as everything essentially needs to be reversed and translated to the center of the screen.

There are 4 different aspects of the GUI; Draw Pixels, Draw Lines, Draw Circles, and some additional options.

Draw Pixels
---

This function will allow you to draw invidiaul pixles directly on the canvas, provided that you pick a desired color and input X and Y coordinates.

The user interface will show a box labelled "How many pixels? (1-5)", with the number 0 inside by default. As long as this box remains at 0, no pixels will be drawn at all. At this number increases however, previously disabled boxes that show the X and Y coordinates for each pixel will start to become enabled. 

Colors can be chosen by clicking on the black box labelled "Color", and a color dialog box will appear. 

Draw Lines
---

This feature was the most difficult to achieve, as the requirements state that we must use "Point Draw" (a quick google search shows a one-point perspective drawing) that starts from the center of the screen and moves outward. As such, only end point coordinates are needed, as the starting point will always be the center of the screen. Basic information about the slope, trigonometry functions, length of the line, and the degrees are shown on the GUI once the line has been drawn. This information is calculated before the line is drawn, to determine if there are any last minute changes that need to be made regarding the rotation of the line. Figuring out rotation was by far the hardest point of this assignment, took me 3 days to figure out how to properly rotate it by building a new line in the desired location, and offsetting the new end point coordinates based on the existing ones. The Translation was easy enough, as you simply added what was inside the translation box to the final coordinates, offsetting the line drawn. 

Line Color is chosen the same way it is for drawing individual pixels, by clicking on the black box and selecting a color from the dialog box.

Draw Circles
---

Circles require new endpoints to be drawn based on retrieving X and Y coordinates from sin and cos functions, where x is obtained from the cos function and y is obtained by the sin function. They are then offset by the chosen center point and the desired translation upon drawing the final points. Creating the outline of the circle was easy, filling was a little more difficult.

Filling the circle required some tricky math. I started out by drawing lines from the center of the screen to fill the circle, as I did previously with Point Draw, simply specifying the end of the line as the outer most points of the circle. This worked for smaller circles but as they were scaled up and grew in complexity, I found that render times grew exponentially. I decided to switch things up and start drawing a line from the outside of the circle (using coordinates we were given from previous functions) towards the center horizontally. As such, the amount of filled circle depends directly on how many outer coordinates there are. The box labelled "Depth" determines the spacing inbetween the outer most pixles; the lower the number, the more outside pixels are drawn, the more filled the circle can become. This approach is also much faster in terms of rendering, however scaling the circle up still reveals the gaps inbetween the pixles.

Additional Options
---

Whils making this assignment, it became clear that having the canvas wiped after every draw was annoying, making subtle changes to renders less obvious. Also, for simplicity with drawing lines with rotations, I decided to make a cross hatch across the entire canvas for ease when dealing with line rotations, etc. These changes were minor, but I chose to keep them as checkboxes that can be turned on or off depending on what you want. 

Known Bugs
---
When drawing lines on the left side of the screen, the "Degrees" label does not update the new value of theda after performing a rotation. I have yet to figure out why that is. It does not affect how the line is drawn, its purely a visual bug. This does not occur when drawing on the right side of the screen. 
