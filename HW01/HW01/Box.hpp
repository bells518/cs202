#pragma once
#include <ostream>
using std::ostream;
#ifndef BOX_HPP_
#define BOX_HPP_

class Box
{
public:
	Box();//default constructor
	Box(int h, int w); //creates a filled box via parameters
	Box(int h, int w, bool f); //all parameters
	Box(const Box& d);//
	
	void setHeight(int h);
	void setWidth(int w);
	int getHeight();
	int getWidth();
	bool filled();
	void print( ostream& p);//prints box to the console




private:
	int height;
	int width;
	bool fill;



};







#endif
