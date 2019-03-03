/*
This homework is the same as bitmap, but uses dynamic memory allocation.
Allocate a pointer to width*height pixels.

The key information you will need is to determine the correct location
Given a pixel at (x,y) the location in the block of memory is y * width + x

*/
int main() {
	Bitmap b(320,200);
	cout << b(10, 15) << '\n'; // extract the pixel at y = 10, x = 15
	b.line(0,0, 100,100, 0xFF0000);

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

	b.write("test.bmp");
}
