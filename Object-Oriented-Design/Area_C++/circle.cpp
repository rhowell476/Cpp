#include "circle.h"
#include <iostream>

Circle::Circle() { radius = 1; }

Circle::Circle(double newRadius) {
	radius = newRadius;
}

double Circle::getArea() {
	return 3.14159 * radius * radius;
}

double Circle::getRadius() {
	return radius;
}
void Circle::setRadius(double newRadius) {
	if (newRadius >= 0)
		radius = newRadius;
}