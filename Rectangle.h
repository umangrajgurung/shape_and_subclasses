#pragma once
#include "Shape.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle :
	public Shape
{
protected:
	double width, length;
public:
	Rectangle();
	Rectangle(double, double);
	Rectangle(double, double, string, bool);
	double getWidth();
	void setWidth(double);
	double getLength();
	void setLength(double);
	double getArea();
	double getPerimeter();
	void toString();
	~Rectangle();
};
#endif