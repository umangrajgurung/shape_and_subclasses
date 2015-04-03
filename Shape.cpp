#include "stdafx.h"
#include "Shape.h"



Shape::Shape()
{
	color = "green";
	filled = true;
}

Shape::Shape(string colorGiven, bool filledState){
	setColor(colorGiven);
	setFilled(filledState);
}

string Shape::getColor(){
	return color;
}

void Shape::setColor(string colorGiven){
	color = colorGiven;
}

bool Shape::isFilled(){
	return filled;
}

void Shape::setFilled(bool filledState){
	filled = filledState;
}

void Shape::toString(){
	cout << "A shape with color of " + color + " and " << ((filled)? "filled." : "not filled.") << endl;
}

Shape::~Shape()
{
}
