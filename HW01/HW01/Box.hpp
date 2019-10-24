#pragma once
#include <ostream>
#ifndef BOX_HPP_
#define BOX_HPP_
std::ostream;
class Box
{
public:
	Box();//default constructor
	Box(int h, int w); //creates a filled box via parameters
	Box(int h, int w, bool f); //all parameters
	Box(const Box& d);//
	void printBox();//prints box to the console
	void setHeight(int h);
	void setWidth(int w);
	int getHeight();
	int getWidth();
	bool filled();
	void print( ostream&);




private:
	int height;
	int width;
	bool fill;



};







#endif
