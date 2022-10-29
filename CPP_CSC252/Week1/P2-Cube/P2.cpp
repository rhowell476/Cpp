#include <iostream>
#include "P2_RectangularCube.h"
using namespace std;

int main()
{
	//create two objects
	RectangularCube cube1;
	RectangularCube cube2(2, 2, 4);

	//invoke Volume and SurfaceArea funcs and display results
	double vol1 = cube1.Volume();
	double surfaceArea1 = cube1.SurfaceArea();
	cout << "Volume of cube1 = " << vol1 << endl;
	cout << "SurfaceArea of cube1 = " << surfaceArea1 << endl;

	double vol2 = cube2.Volume();
	double surfaceArea2 = cube2.SurfaceArea();
	cout << "Volume of cube2 = " << vol2 << endl;
	cout << "SurfaceArea of cube2 = " << surfaceArea2 << endl;

	//invoke set func to change a side ---> invoke Volume and SurfaceArea as above
	cube1.setWidth(4);
	vol1 = cube1.Volume();
	surfaceArea1 = cube1.SurfaceArea();
	cout << "Volume of cube1 = " << vol1 << endl;
	cout << "SurfaceArea of cube1 = " << surfaceArea1 << endl;

	//create a third object
	cube1 = RectangularCube();
	cout << "Volume of anonymous cube1 = " << cube1.Volume() << endl;
	cout << "SurfaceArea of anonymous cube1 = " << cube1.SurfaceArea();

	return 0;
}