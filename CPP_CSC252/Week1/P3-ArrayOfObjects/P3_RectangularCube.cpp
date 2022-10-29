#include "P3_RectangularCube.h"
#include <iostream>
using namespace std;

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

//display each element of RectangularCube object
void RectangularCube::printCube(RectangularCube rc) {
	cout << "Length: " << L << "\nWidth: " << W << "\nHeight: " << H 
	  << "\nVolume: " << rc.Volume() << "\nSurface Area: " << rc.SurfaceArea() << endl;
}