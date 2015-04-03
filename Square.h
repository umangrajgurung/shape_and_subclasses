#pragma once
#include "Rectangle.h"

#ifndef SQUARE_H
#define SQUARE_H

class Square :
	public Rectangle
{
public:
	Square();
	Square(double);
	Square(double, string, bool);
	double getSide();
	void setSide(double);
	void toString();
	~Square();
};

#endif