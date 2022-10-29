#include <iostream>
#include <algorith>
using namespace std;

template<typename T>
int binarySearch(const T list[], T key, int listSize);

int main()
{
  //Binary search for int array
  int list[] = {-3, 1, 2, 2, 4, 4, 5, 6};
  sort(list, list + 8)
  int key = 6;
  double i = binarySearch(list, key, 8);
  cout << i << " " << endl;

  //Binary search for double array
  double list[] = {-12.4, 38.77, 2, 2, 4, 4, 5, 6};
  return 0;
}

template<typename T>
int binarySearch(const T list[], T key, int listSize)
{
  int low = 0;
  int high = listSize - 1;

  while (high >= low)
  {
    int mid = (low + high) / 2;
    if (key < list[mid])
      high = mid - 1;
    else if (key == list[mid])
      return mid;
    else
      low = mid + 1;
  }

  return -low - 1;
}
