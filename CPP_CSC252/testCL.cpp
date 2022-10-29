// Example program
#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
using namespace std;


class GeometricObject
{
protected:
  GeometricObject();
  GeometricObject(const string& color, bool filled);

public:
  string getColor() const;
  void setColor(const string& color);
  bool isFilled() const;
  void setFilled(bool filled);
  string toString() const;
  virtual double getArea() const = 0;
  virtual double getPerimeter() const = 0;

private:
  string color;
  bool filled;
}; // Must place semicolon here

GeometricObject::GeometricObject()
{
  color = "white";
  filled = false;
}

GeometricObject::GeometricObject(const string& color, bool filled)
{
  setColor(color);
  setFilled(filled);
}

string GeometricObject::getColor() const
{
  return color;
}

void GeometricObject::setColor(const string& color)
{
  this->color = color;
}

bool GeometricObject::isFilled() const
{
  return filled;
}

void GeometricObject::setFilled(bool filled)
{
  this->filled = filled;
}

string GeometricObject::toString() const
{
  return "Geometric Object";
}


#ifndef TRIANGLEEXCEPTION_H
#define TRIANGLEEXCEPTION_H

using namespace std;

class TriangleException: public logic_error
{
public:
  TriangleException(double side1, double side2, double side3)
    : logic_error("Invalid triangle")
  {
    this->side1 = side1;
    this->side2 = side2;
    this->side3 = side3;
  }

  double getSide1() const
  {
    return side1;
  }

  double getSide2() const
  {
    return side2;
  }

  double getSide3() const
  {
    return side3;
  }

private:
  double side1, side2, side3;
}; // Semicolon required

#endif 


#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle: public GeometricObject
{
public:
  Triangle()
  {
    side1 = side2 = side3 = 1;
  }

  Triangle(double side1, double side2, double side3)
  {
    if (!isValid(side1, side2, side3))
      throw TriangleException(side1, side2, side3);

    this->side1 = side1;
    this->side2 = side2;
    this->side3 = side3;
  }

  double getSide1() const
  {
    return side1;
  }

  double getSide2() const
  {
    return side2;
  }

  double getSide3() const
  {
    return side3;
  }

  void setSide1(double side1)
  {
    if (!isValid(side1, side2, side3))
      throw TriangleException(side1, side2, side3);

    this->side1 = side1;
  }

  void setSide2(double side2)
  {
    if (!isValid(side1, side2, side3))
      throw TriangleException(side1, side2, side3);

    this->side2 = side2;
  }

  void setSide3(double side3)
  {
    if (!isValid(side1, side2, side3))
      throw TriangleException(side1, side2, side3);

    this->side3 = side3;
  }

  double getPerimeter() const
  {
    return side1 + side2 + side3;
  }

  double getArea() const
  {
    double s = getPerimeter() / 2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
  }

private:
  double side1, side2, side3;

  bool isValid(double side1, double side2, double side3) const
  {
    return (side1 < side2 + side3) && (side2 < side1 + side3) &&
      (side3 < side1 + side2);
  }
};

#endif 


int main()
{
  try
  {
    Triangle triangle;
    cout << "Perimeter is " << triangle.getPerimeter() << endl;
    cout << "Area is " << triangle.getArea() << endl;

    triangle.setSide3(4);
    cout << "Perimeter is " << triangle.getPerimeter() << endl;
    cout << "Area is " << triangle.getArea() << endl;
  }
  catch (TriangleException& ex)
  {
    cout << ex.what();
    cout << " three sides are " << ex.getSide1() << " "
      << ex.getSide2() << " " << ex.getSide3() << endl;
  }

  return 0;
}
