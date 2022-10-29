#ifndef RECTANGULARCUBE_H
#define RECTANGULARCUBE_H

class RectangularCube
{
public:

	RectangularCube();
	RectangularCube(double length, double width, double height);
	double Volume();
	double SurfaceArea();
	void printCube (RectangularCube rc);

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

private:
	double L; //define cube's length
	double W; //define cube's width
	double H; //define cube's height
};

#endif