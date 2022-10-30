#include <iostream>
using namespace std;

int fibonacci(int i) {
	if (i <= 2) return 1;
	return fibonacci(i-2) + fibonacci(i - 1);
}

int main() {
	int x = 0;

	cin >> x;
	cout << "Fibonacci sequence " << x << " is: " << fibonacci(x);

	return 0;
}