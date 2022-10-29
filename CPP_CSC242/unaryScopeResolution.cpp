#include <iostream>
using namespace std;
int v1 = 10;
int main()
{
  int v1 = 5;
  cout << "local variable v1 is " << v1 << endl;
  cout << "global variable v1 is " << ::v1 << endl;
  return 0;
}

/*

If a local variable name is the same as a global variable name, you can access 
the global variable using ::globalVariable. The :: operator is known as the unary 
scope resolution. For example, the above code:
*/