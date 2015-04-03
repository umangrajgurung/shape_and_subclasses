#include "stdafx.h"
#include "Circle.h"
# define M_PI 3.14159265358979323846


Circle::Circle()
{
	setRadius(1.0);
}

Circle::Circle(double radiusGiven){
	setRadius(radiusGiven);
}

Circle::Circle(double radiusGiven, string colorGiven, bool filledState)
	:Shape(colorGiven, filledState){
	setRadius(radiusGiven);
	setColor(colorGiven);
	setFilled(filledState);
}

void Circle::setRadius(double radiusGiven){
	radius = radiusGiven;
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
