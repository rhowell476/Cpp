#ifndef RECTANGULARCUBE_H
#define RECTANGULARCUBE_H
#include <iostream>
using namespace std;

class RectangularCube
{
public:
	RectangularCube();
	RectangularCube(double length, double width, double height);
	double Volume();
	double SurfaceArea();
	
	//inline functions set and get L, W, H
	void setLength(double length) {
		L = length;
	}
	void setWidth(double width) {
		W = width;
	}
	void setHeight(double height) {
		H = height;
	}
	double getLength() {
		return L;
	}
	double getWidth() {
		return W;
	}
	double getHeight() {
		return H;
	}
	// overload + operator
	
	//overload [] operator
	double& operator[](int index) {
		if (index == 0)
			return L;
		else if (index == 1)
			return W;
		else if (index == 2)
			return H;
	}

	friend ostream& operator<<(ostream& out, RectangularCube& cuboid);

	RectangularCube operator+();

private:
	double L; //define cube's length
	double W; //define cube's width
	double H; //define cube's height
};

//default constructor initializing sides to 1
RectangularCube::RectangularCube(){
		L = 1;
		W = 1;
		H = 1;
	}

//class constructor taking side lengths as parameters
RectangularCube::RectangularCube(double length, double width, double height) {
		L = length;
		W = width;
		H = height;
	}

//cube functions (volume and surface area)
double RectangularCube::Volume() {
		return L * W * H;
	}
double RectangularCube::SurfaceArea() {
		return (L * W * 2) + (L * H * 2) + (W * H * 2);
	}

// 3.) a.)
// Operator << function is a friend function to the RectangularCube class so that the
// RectangularCube class can access data fields in the ostream class for ostream& out
// I've made the operator function () a friend of the class so that both the iostream
// and the RectangularCube class have access to data fields in the function below. Parameter
// out is used in the ostream class and parameter cuboid is used in the RectangularCube
// class.
ostream& operator<<(ostream& out, RectangularCube& cuboid) {
	out << "Length: " << cuboid.getLength() << endl << "Width: " << cuboid.getWidth() <<
		endl << "Height: " << cuboid.getHeight() << endl << "Volume:" << cuboid.Volume() <<
		endl << "Surface Area: " << cuboid.SurfaceArea() << endl;
		return out;
	}

RectangularCube operator+(RectangularCube& cuboid1, RectangularCube& cuboid2) {
		double length = cuboid1.getLength() + cuboid2.getLength();
		double width = cuboid1.getWidth() + cuboid2.getWidth();
		double height = cuboid1.getWidth() + cuboid2.getWidth();
		return RectangularCube(length, width, height); //add the sides together for combined volume
	}

// Define nonmember function
bool operator<(RectangularCube& r1, RectangularCube& r2) {
	return (r1.Volume() < r2.Volume());
}
// 3.) b.)
// The purpose of a friend allows objects access to each other's parameters. Without having a friend
// class, an object cannot use the values of data fields in the other object.

#endif