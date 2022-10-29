#include <iostream>
#include <vector>
using namespace std;

int sum(const vector<vector<int>>& matrix)
{
  int total = 0;
  for (unsigned int row = 0; row < matrix.size(); row++)
  {
    for (unsigned int column = 0; column < matrix[row].size(); column++)
    {
      total += matrix[row][column];
    }
  }

  return total;
}

int main()
{
  vector<vector<int>> matrix(4); // Four rows

  for (unsigned int i = 0; i < 4; i++)
    matrix[i] = vector<int>(3); // Each row has three columns

  matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 3;
  matrix[1][0] = 4; matrix[1][1] = 5; matrix[1][2] = 6;
  matrix[2][0] = 7; matrix[2][1] = 8; matrix[2][2] = 9;
  matrix[3][0] = 10; matrix[3][1] = 11; matrix[3][2] = 12;

  cout << endl << matrix[0][0] << endl;

  cout << "Sum of all elements is " << sum(matrix) << endl;

  return 0;
}
