#include "Box.hpp"
#include <iostream>
using std::cout;
using std::endl;
#include <ostream>
using std::ostream;

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

bool Box::filled()
{
	if (fill)
	{
		cout << "Filled" << endl;
		return true;
	}
	else if (!fill)
	{
		cout << "Hollow" << endl;
		return false;
	}
}
void Box::print(ostream& p)//why is everything somehow worse
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
					p << "x";
				}
				else if (i != 1 && j != 1 && i != h && j != w)//hollow spaces
				{
					p << " ";
				}
				else//sides of hollowed box
				{
					p << "x";
				}

			}
			p << "\n";
		}
	}
	if (f)
	{
		for (int i = 1; i <= h; i++)//height
		{

			for (int j = 1; j <= w; j++)//width
			{

				p << "x";

			}
			p << "\n";
		}
	}
}
