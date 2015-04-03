#pragma once
#include "Shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H
class Circle :
	public Shape
{
protected:
	double radius;
public:
	Circle();
	Circle(double);
	Circle(double, string, bool);
	double getRadius();
	void setRadius(double);
	double getArea();
	double getPerimeter();
	void toString();
	~Circle();
};
#endif
