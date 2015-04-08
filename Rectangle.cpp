#include "stdafx.h"
#include "Rectangle.h"


Rectangle::Rectangle()
{
	width = 1.0;
	length = 1.0;
}

Rectangle::Rectangle(double width, double length){
	setWidth(width);
	setLength(length);
}

Rectangle::Rectangle(double width, double length, string color, bool filled)
	:Shape(color, filled){
	setWidth(width);
	setLength(length);
	setColor(color);
	setFilled(filled);
}

double Rectangle::getWidth(){
	return width;
}

void Rectangle::setWidth(double width){
	this->width = width;
}

double Rectangle::getLength(){
	return length;
}

void Rectangle::setLength(double length){
	this->length = length;
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
