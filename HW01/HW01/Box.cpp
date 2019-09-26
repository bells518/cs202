#include "Box.hpp"
#include <iostream>
using std::cout;
using std::endl;


Box::Box() : height(1), width(1), fill(true)
{

}
Box::Box(int h, int w): height(h), width(w), fill(true)
{

}
Box::Box(int h, int w, bool f) : height(h), width(w), fill(f)
{

}
Box::Box(const Box& d) : height(d.height), width(d.width), fill(d.fill)
{

}

void Box::printBox()
{
	int h = height;
	int w = width;
	bool f = fill;
	if (!f)//if box is hollow
	{


		for (int i = 1; i <= h; i++)//height
		{

			for (int j = 1; j <= w; j++)//width
			{
				if (i == 1 || i == h)//bottom and top of hollowed box
				{
					cout << "x";
				}
				else if (i != 1 && j != 1 && i != h && j != w )//hollow spaces
				{
					cout << " ";
				}
				else//sides of hollowed box
				{
					cout << "x";
				}

			}
			cout << "\n";
		}
	}
	if (f)
	{
		for (int i = 1; i <= h; i++)//height
		{

			for (int j = 1; j <= w; j++)//width
			{
				
					cout << "x";

			}
			cout << "\n";
		}
	}
}

void Box::setHeight(int h)
{
	height = h;
}

void Box::setWidth(int w)
{
	width = w;
}

int Box::getHeight()
{
	return height;
}

int Box::getWidth()
{
	return width;
}
