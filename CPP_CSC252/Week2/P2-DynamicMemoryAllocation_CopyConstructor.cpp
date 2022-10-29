#include <iostream>
using namespace std;

/*------------------------------------Circle Class-------------------------*/
class Circle {
public:
	Circle();
	Circle(double);
	double getArea();
	double getRadius();
	void setRadius(double);

private:
	double radius;
};

/*------------------------------------Shape Class-------------------------*/
class Shape {
public:
	Shape(int capacity);
	~Shape();
	void addCircle(Circle c);
	Circle* getCircles() const;
	int getNumberOfCircles() const;
	Shape(const Shape& RHS);
	void print() const;

private:
	Circle* circles;
	int numberOfCircles;
	int capacity;
};

/*------------------------------------Circle Class Methods-------------------------*/
// Construct a default circle object
Circle::Circle()
{
	radius = 1;
}

// Construct a circle object
Circle::Circle(double newRadius)
{
	radius = newRadius;
}

// Return the area of this circle
double Circle::getArea()
{
	return radius * radius * 3.14159;
}

// Return the radius of this circle
double Circle::getRadius()
{
	return radius;
}

// Set a new radius
void Circle::setRadius(double newRadius)
{
	//radius = (newRadius >= 0) ? newRadius
	if (newRadius >= 0)
		radius = newRadius;
}

/*------------------------------------Shape Class Methods-------------------------*/
Shape::Shape(int capacity) {
	circles = new Circle[capacity];
	numberOfCircles = 0;
	this->capacity = capacity;
}

Shape::~Shape() {
	delete circles;
}

void Shape::addCircle(Circle c) {
	circles[numberOfCircles] = c;
	numberOfCircles++;
}

Circle* Shape::getCircles() const {
		return circles;
}

int Shape::getNumberOfCircles() const {
	return numberOfCircles;
}

Shape::Shape(const Shape& RHS) {
	cout << "Copy constructor executing\n";
	circles = new Circle[RHS.capacity];
	for (int i = 0; i < RHS.capacity; i++) {
		circles[i] = RHS.circles[i];
	}
	numberOfCircles = RHS.getNumberOfCircles();
	capacity = RHS.capacity;
	numberOfCircles = RHS.numberOfCircles;
}

void Shape::print() const {
	for (int i = 0; i < numberOfCircles; i++)
	{
		cout << "circle[" << i << "] radius is " << circles[i].getRadius() << endl;
	}
}


/*------------------------------------Int Main Function---------------------------*/
int main() {
	Circle circle1(5);
	Circle circle2(30);

	//P2 d)a)
	Shape s1(2);
	s1.addCircle(circle1);
	s1.addCircle(circle2);
	cout << "s1 circles: " << endl;
	s1.print();

	//P2 d)b)
	Shape s2(3);
	Circle circle3(4);
	Circle circle4(5);
	Circle circle5(6);
	s2.addCircle(circle3);
	s2.addCircle(circle4);
	s2.addCircle(circle5);
	cout << "s2 circles: " << endl;
	s2.print();

	//P2 d)c)
	Shape s3(s2);
	cout << "copy complete..." << endl;
	cout << "s3 circles: " << endl;
	s3.print();

	//P2d.)d.)
	Circle circle6(7);
	s2.addCircle(circle6);
	cout << "s2 circles: " << endl;
	s2.print();
	cout << "s3 circles: " << endl;
	s3.print();

	return 0;
}