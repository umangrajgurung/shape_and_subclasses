#include "stdafx.h"
#include "Square.h"


Square::Square(){}

Square::Square(double side){
	width = side;
	length = side;
}

Square::Square(double side, string color, bool filled)
	:Rectangle(side, side, color, filled){
	setSide(side);
	setColor(color);
	setFilled(filled);
}

void Square::setSide(double side){
	setWidth(side);
	setLength(side);
}

double Square::getSide(){
	return width;
}

void Square::toString(){
	cout << "A Square with side = " << width << ", which is a subclass of ";
	Rectangle::toString();
}

Square::~Square()
{
}
