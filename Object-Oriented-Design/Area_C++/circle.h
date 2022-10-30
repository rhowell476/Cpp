#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
public:
	Circle();
	Circle(double newRadius);
	double getArea();
	double getRadius();
	void setRadius(double newRadius);
private:
	double radius;
};
#endif