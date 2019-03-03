#include "Bitmap.hh"
/*
	Create a class that has a 2-D array of uint32_t.  Each number represents a color
	in RGB format (one byte for each of the guns)

	You can write the color in hex. Each two digits are red, green and blue

 */
int main() {
	Bitmap b; // static sized bitmap 300x200 with every pixel = black = 0
	
	//https://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm
	/*
		draw a line using Bresenham's algorithm. Set all pixels to red
		(0xFF0000)
	*/
	b.line(0,0, 200,100, 0xFF0000); // Bresenham's algorithm

	
	b.rect(50,0,100,50, 0x00FF00); // draw a green rectangle top-left=(50,0) w=100, h=50

	b.horizLine(0, 150, 165, 0x0000FF); // draw a horizontal line from x=0 to x=150 at y=165
	// color is blue
	
	b.vertLine(10, 120, 40, 0xFFFFFF);

#if 0
	// write is not yet part of this activity.
	// it will be added
	b.write("test.bmp"); // write a .bmp file
	//(if we have not covered this in time, wait until next assignment for writing the file)
#endif
}
	
