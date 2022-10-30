#include <iostream>
#include <string>

using namespace std;

template<typename T>
T maxFun(T x, T y) {
	if (x > y)
		return x;
	else
		return y;
}

int main() {
	int n1 = 30;
	int n2 = 12;
	cout << "The max is " << maxFun(n1, n2) << endl;
	string s1 = "hello";
	string s2 = "bye";
	cout << "The max is " << maxFun(s1, s2) << endl;
	system("pause");
	return 0;
}