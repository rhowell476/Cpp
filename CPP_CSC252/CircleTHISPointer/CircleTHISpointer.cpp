#include "Circle.h"

int Circle::numberOfObjects = 0;

// Construct a default circle object
Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

// Construct a circle object
Circle::Circle(double radius)
{
	(*this).radius = radius; // or this->radius = radius;
	numberOfObjects++;
}

// Return the area of this circle
double Circle::getArea() const
{
	return radius * radius * 3.14159;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
}

int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}

//Destruct a circle object
Circle::~Circle()
{
	numberOfObjects--;
}