#include "stdafx.h"
#include "Rectangle.h"


Rectangle::Rectangle()
{
	width = 1.0;
	length = 1.0;
}

Rectangle::Rectangle(double widthGiven, double lengthGiven){
	setWidth(widthGiven);
	setLength(lengthGiven);
}

Rectangle::Rectangle(double widthGiven, double lengthGiven, string colorGiven, bool filledState)
	:Shape(colorGiven, filledState){
	setWidth(widthGiven);
	setLength(lengthGiven);
	setColor(colorGiven);
	setFilled(filledState);
}

double Rectangle::getWidth(){
	return width;
}

void Rectangle::setWidth(double widthGiven){
	width = widthGiven;
}

double Rectangle::getLength(){
	return length;
}

void Rectangle::setLength(double lengthGiven){
	length = lengthGiven;
}

double Rectangle::getArea(){
	return length * width;
}

double Rectangle::getPerimeter(){
	return 2 * (length + width);
}

void Rectangle::toString(){
	cout << "A Rectangle with width = " << width << " and length = " << length << ", which is a subclass of ";
	Shape::toString();
}

Rectangle::~Rectangle()
{
}
