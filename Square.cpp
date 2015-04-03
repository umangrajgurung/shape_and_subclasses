#include "stdafx.h"
#include "Square.h"


Square::Square(){}

Square::Square(double sideGiven){
	width = sideGiven;
	length = sideGiven;
}

Square::Square(double sideGiven, string colorGiven, bool filledState)
	:Rectangle(sideGiven, sideGiven, colorGiven, filledState){
	setSide(sideGiven);
	setColor(colorGiven);
	setFilled(filledState);
}

void Square::setSide(double sideGiven){
	setWidth(sideGiven);
	setLength(sideGiven);
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
