// Shape-Circle-Rectangle and -Square.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

int main(){
	Rectangle window1(3, 2, "Orange", false);
	Rectangle window2(5, 2, "Orange", false);
	Rectangle door(1, 4, "Brown", true);
	Circle clock(0.5, "Cyan", true);
	Square doraemonPoster(2, "Red", true);

	cout << "\t\t\tShapes in a child's room\n\n" << endl;
	cout << "Windows:-" << endl;
	cout << "# First window:\t";
	window1.toString();
	cout << "# Second window:\t";
	window2.toString();
	cout << "\n Doors:-" << endl;
	cout << "# One door:\t";
	door.toString();
	cout << "\n Clocks:-" << endl;
	cout << "# One clock:\t";
	clock.toString();
	cout << "\n Posters:-" << endl;
	cout << "# A doraemon poster:\t";
	doraemonPoster.toString();
}