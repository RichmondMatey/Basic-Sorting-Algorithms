/****************************************************************************** 
 *File: BubbleSort.cpp  
 *Description: Program to sort an array using Bubble Sort
******************************************************************************/  

#include <iostream>
#include <string>

using namespace std;

void BubbleSort(int a[], int length);
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
  
  BubbleSort(arr, arraySize);
  
  cout << "\nSorted array:   ";
  displayArray(arr, arraySize);
  
  return 0;
}

void BubbleSort (int a[], int length)
{
	int i, j, temp;
	
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length - i - 1; j++)
        {
            if (a[j + 1] < a[j])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void displayArray(int a[], int length){
    for(int i=0; i<length; i++){
        cout<<" "<<a[i];
    }
}