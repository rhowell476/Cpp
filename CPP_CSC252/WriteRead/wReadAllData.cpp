#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // Open a file
  ifstream input("score.txt");

  double sum = 0;
  double number;
  while (!input.eof()) // Read data to the end of file
  {
    input >> number; // Read data
    //if (input.eof()) break;
    cout << number << " "; // Display data
    sum += number;
  }
  // while (input >> number) //read data until it fails
  // {
  //   cout << number << " ";
  //   sum += number;
  // }

  input.close();

  cout << "\nTotal is " << sum << endl;

  return 0;
}