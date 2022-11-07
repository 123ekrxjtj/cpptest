#include <iostream>
#include <string>
using namespace std;

class Color
{
	int red;
	int green;
	int blue;
public:
	Color(int red = 0, int green = 0, int blue = 0);
	Color operator+ (Color c1);
	bool operator==(Color c1);
	void show() { cout << red << " " << green << " " << blue << endl; }
};

Color::Color(int red, int green, int blue)
{
	this->red = red;
	this->green = green;
	this->blue = blue;
}

Color Color::operator+(Color c1)
{
	Color tmp;
	tmp.red = this->red + c1.red;
	tmp.blue = this->blue + c1.blue;
	tmp.green = this->green + c1.green;
	if (tmp.red > 255) tmp.red = 255;
	if (tmp.green > 255) tmp.green = 255;
	if (tmp.blue > 255) tmp.blue = 255;
	return tmp;
}

bool Color::operator==(Color c1)
{
	bool res = this->red == c1.red &&
		this->green == c1.green &&
		this->blue == c1.blue;
	return res;
}



int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)cout << "보라색 맞음";
	else cout << "보라색 아님";
}
