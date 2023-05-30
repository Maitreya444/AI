#include<iostream>
using namespace std;

void swap(int *xp, int *yp)
{
     int temp = *xp;
     *xp = *yp;
     *yp = temp;
}
void SelectionSort(int arr[], int n)
{
     int i = 0;
     int j = 0;
     int min_ele = 0;

     for(i = 0; i<n-1; i++)
     {
          min_ele = i;
          for(j = i+1; j<n; j++)
          
          if(arr[j] < arr[min_ele])
          min_ele = j;

          if(min_ele != i)
          swap(&arr[min_ele], &arr[i]);
     }
}
void printArray(int arr[], int size)
{
     int i = 0;
     for(i = 0; i <size; i++)
     cout<< arr[i];
     cout<<"  \n   ";
}
int main()
{
     int arr[] = {8, 0, 7, 1, 3};
     int n = sizeof(arr)/sizeof(arr[0]);
     SelectionSort(arr, n);
     cout<<"Soretd Array :   \n";
     printArray(arr, n);
     return 0;
}