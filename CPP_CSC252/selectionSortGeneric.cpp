#include <iostream>
using namespace std;

template<typename T>
void selectionSort(T list[], int listSize)
{
  for (int i = 0; i < listSize; i++)
  {
    // Find the minimum in the list[i..listSize-1]
    T currentMin = list[i];
    int currentMinIndex = i;

    for (int j = i + 1; j < listSize; j++)
    {
      if (currentMin > list[j])
      {
        currentMin = list[j];
        currentMinIndex = j;
      }
    }

    // Swap list[i] with list[currentMinIndex] if necessary;
    if (currentMinIndex != i)
    {
      list[currentMinIndex] = list[i];
      list[i] = currentMin;
    }
  }
}

template<typename T>
void printArray(T list[], int arraySize)
{
  for (int i = 0; i < arraySize - 1; i++)
  {
    cout << list[i] <<  " ";
  }
}

int main()
{
  double list[] = {9, 1, 2, 5, 4, 8, 6};
  selectionSort(list, 7);

  printArray(list, 7);
  return 0;
}