#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	const int CITIESMAX = 20;
	double cities[CITIESMAX][2];
	int citiesRow;

	// Get number of cities from user
	cout << "Enter the number of cities: " << endl;
	cin >> citiesRow;

	cout << "Enter the coordinates of the cities: " << endl; /* enter array values for cities*/
	for (int row = 0; row < citiesRow; row++)
		for (int col = 0; col < 2; col++)
			cin >> cities[row][col];

	int row = 0;
	int col = 0;
	for (row = 0; row < citiesRow; row++)
	{
		for (col = 0; col < 2; col++)
			cout << cities[row][col] << " ";
		cout << endl;
	}

	double cityCenter [1][2] = {2.5, 5.0};

	// Array calculations
	double distance = 0;
	double sum = 0;
		for (row = 0; row < citiesRow; row++)
		{
			row++;
			for (col = 0; col < citiesRow; col++)
			{
				
				distance = 0;

				// Compute total distance between points
				double underRoot = pow(cities[row][col] - cityCenter[0][0], 2) + pow(cities[row][col + 1] - cityCenter[0][1], 2);
				distance = sqrt(underRoot);
				sum += distance;
			}
		}

	// Cout distance

	int distanceNew =  distance * 100.0 / 100;

	cout << "\ndistance is: " << sum;

	return 0;
}