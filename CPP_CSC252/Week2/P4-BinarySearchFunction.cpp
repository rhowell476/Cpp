#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

template<typename T>
int binarySearch(const T list[], T key, int listSize);

int main()
{
  //Binary search for int array
  int list[] = {-3, 1, 2, 2, 4, 4, 5, 6};
  sort(list, list + 8);
  int key = 6;
  int keyIndex = binarySearch(list, key, 8);

  //cout results for int array
  cout << "key is: " << key << endl;
  for (int i = 0; i < 8; i++)
    cout << "list[" << i << "] is: " << list[i] << endl;
  cout << "The key is found at index " << keyIndex << endl;

  //Binary search for double array
  double list2[] = {-12.4, 38.77, 3.14, 18.7, 400, 12000.99, 123.456, 75, 75, 32};
  sort(list2, list2 + 10);
  double key2 = 400;
  int key2Index = binarySearch(list2, key2, 10);

  cout << "\n-----------------------------------------\n";

  //cout results for double array
  cout << "key is: " << key2 << endl;
  for (int i = 0; i < 10; i++)
    cout << "list2[" << i << "] is: " << list2[i] << endl;
  cout << "The key is found at index " << key2Index << endl;

  cout << "\n-----------------------------------------\n";

  //Binary seach for string array
  string list3[] = {"keyboard", "mouse", "monitor", "displayport", "power adapter",
    "headphones", "camera"};
  sort(list3, list3 + 7);
  string keyString = "power adapter";
  int keyStringIndex = binarySearch(list3, keyString, 8);

  //cout results for string array
  cout << "key is: " << keyString << endl;
  for (int i = 0; i < 7; i++)
    cout << "list3[" << i << "] is: " << list3[i] << endl;
  cout << "The key is found at index " << keyStringIndex << endl;

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
