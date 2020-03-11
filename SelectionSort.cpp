/****************************************************************************** 
 *File: SelectionSort.cpp  
 *Description: Program to sort an array using Selection Sort
******************************************************************************/  

#include <iostream>
#include <string>

using namespace std;

void selectionSort(int a[], int length);
void displayArray(int a[], int length);

int main()
{
  int arraySize;
  
  cout << "Enter size of array: " ;
  cin >> arraySize;
  
  int arr[arraySize];
  
  for(int i=0; i<arraySize; i++){
      cout << "Enter value "<< i+1<<" : ";
      cin >> arr[i];
    }
    
  cout << "\nUnsorted array: ";
  displayArray(arr, arraySize);
  
  selectionSort(arr, arraySize);
  
  cout << "\nSorted array:   ";
  displayArray(arr, arraySize);
  
  return 0;
}

void selectionSort(int a[], int length)
{
    int i, j, m, min;
    for (i = 0; i < length - 1; i++)
    {
        /* find the minimum */
        min = i;
        for (j = i + 1; j < length; j++)
            if (a[j] < a[min])
                min = j;

                m = a[min];

        /* move elements to the right */
        for (j = min; j > i; j--)
            a[j] = a[j-1];

            a[i] = m;
    }
}

void displayArray(int a[], int length){
    for(int i=0; i<length; i++){
        cout<<" "<<a[i];
    }
}