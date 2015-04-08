#include "stdafx.h"
#include "Shape.h"



Shape::Shape()
{
	color = "green";
	filled = true;
}

Shape::Shape(string color, bool filled){
	setColor(color);
	setFilled(filled);
}

string Shape::getColor(){
	return color;
}

void Shape::setColor(string color){
	this->color = color;
}

bool Shape::isFilled(){
	return filled;
}

void Shape::setFilled(bool filled){
	this->filled = filled;
}

void Shape::toString(){
	cout << "A shape with color of " + color + " and " << ((filled)? "filled." : "not filled.") << endl;
}

Shape::~Shape()
{
}
