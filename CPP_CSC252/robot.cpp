#include <iostream>
using namespace std;

int main()
{
  int load1X = 2;
  int load1Y = 6;
  int load2X = 3;
  int load2Y = 8;
  int robot1X = 5;
  int robot1Y = 6;
  int robot2X = 7;
  int robot2Y = 8;

  for (int row = 0; row < 10; row++) {
    for (int col = 0; col < 10; col++) {
      if (row == load1X && col == load1Y)
        cout << "-A-|";
      else if (row == load2X && col == load2Y)
        cout << "-B-|";
      else if (row == robot1X && col == robot1Y)
        cout << "-R1|";
      else if (row == robot2X && col == robot2Y)
        cout << "-R2|";
      else
        cout << "---|";
    }
    cout << endl;
  }
  return 0;
}