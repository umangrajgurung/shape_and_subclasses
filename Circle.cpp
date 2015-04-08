#include "stdafx.h"
#include "Circle.h"
# define M_PI 3.14159265358979323846


Circle::Circle()
{
	setRadius(1.0);
}

Circle::Circle(double radius){
	setRadius(radius);
}

Circle::Circle(double radius, string color, bool filled)
	:Shape(color, filled){
	setRadius(radius);
	setColor(color);
	setFilled(filled);
}

void Circle::setRadius(double radius){
	this->radius = radius;
}

double Circle::getRadius(){
	return radius;
}

double Circle::getArea(){
	return  M_PI * radius * radius;
}

double Circle::getPerimeter(){
	return 2 * radius * radius;
}

void Circle::toString(){
	cout << "A Circle with radius = " << radius << ", which is a subclass of ";
	Shape::toString();
}

Circle::~Circle()
{
}
