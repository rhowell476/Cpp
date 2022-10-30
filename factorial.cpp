#include <iostream>
using namespace std;

int r;
int n;

int factorial(int n) {
	if(n<0)
		return (-1);
	if (n==0) {return(1);}
	else {
		return (n*factorial(n-1));
	}
}

int main() {
	int number = 6;
	int ans;
	ans=factorial(number);
	cout << ans;

	return 0;
}