#ifndef CIRCLE_H  //Inclusion guard line1 --> test if CIRCLE_H symbol is defined
#define CIRCLE_H  //Inclusion guard line2 --> define CIRCLE_H symbol

class Circle
{
public:
	Circle();
	Circle(double);
	~Circle(); //Destructor
	double getArea() const;
	double getRadius() const;
	void setRadius(double);
	static int getNumberOfObjects();


private:
	double radius;
	static int numberOfObjects;
};

#endif  // Inclusion guard line3 --> needed to indicate the end of the header file