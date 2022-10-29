#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

vector<double> rowSum(const vector<vector<double>>& matrix) {
	vector<double> returnedSum (5);
	for (unsigned i = 0; i < 5; i++)
	{
		double sum = 0;
		for (unsigned j = 0; j < 5; j++)
			sum += matrix[i][j];
		returnedSum[i] = sum;
	}

	return returnedSum;
}

int main() {
	srand(time(0));

	vector<vector<double>> numbers(5); //Five Rows

	for (unsigned i = 0; i < 5; i++)
		numbers[i] = vector<double>(5); //Five Columns

	//assign random number to each vector index
	for (unsigned i = 0; i < 5; i++)
		for (unsigned j = 0; j < 5; j++)
			numbers[i][j] = rand() % 25 + 1;

	//cout result to console
	cout << "Vector(1) printout: " << endl;

	for (unsigned i = 0; i < 5; i++)
	{
		cout << "numbers[" << i << "][0 - 4]: ";
		for (unsigned j = 0; j < 5; j++)
			cout << numbers[i][j] << " ";
		cout << endl;
	}
	cout << "----------------------------------\n";

	//function rowSum is run which sums rows of given vector
	vector<double> sumVector = rowSum(numbers);

	//cout result to console
	cout << "Vector(2) printout: " << endl;

	for (unsigned i = 0; i < 5; i++)
		cout << "sumVector[" << i << "]: " <<
		  sumVector[i] << endl;

	return 0;
}
