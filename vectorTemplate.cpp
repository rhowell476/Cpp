#include <vector>
#include <iostream>

using namespace std;

void fun (vector<int>& blah)
{
	for (int i = 1; i <= 10; i++) {
		blah.push_back(i);
	}
}

int main()
{
	vector<int> numbers;
	fun(numbers);

	for (int j = 0; j < 10; j++) {
		cout << numbers[j] << endl;
	}

	return 0;
}

// int main()
// {
// 	vector<int> numbers;

// 	for (int i = 1; i <= 10; i++) {
// 		numbers.push_back(i);
// 	}

// 	for (int j = 0; j < 10; j++) {
// 		cout << numbers[j] << endl;
// 	}

// 	return 0;
// }