
#include<stdio.h>
#include<iostream>
using namespace std;

 template<class T>

T Reverse(T *arr, int size)
{
    for(int i = size-1; i >= 0; i--)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}

int main()
{
   int arr[] = {10,20,30,10,30,40,10,40,10};

  for(int i = 0; i < 9; i++)
  {
    cout<<arr[i]<<"\t";
  }
    cout<<"\n";
  Reverse(arr,9);

    return 0;
}