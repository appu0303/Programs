
#include<stdio.h>
#include<iostream>
using namespace std;

 template<class T>

T SearchFirst(T *arr, int size, T iNo)
{
    int i = 0;
    
   for( i = 0; i < size; i++)
   {
        if(arr[i] == iNo)
        {
            break;
        }  
   }
  if(i == size)
  {
    return -1;
  }
  else
  {
    return (i + 1);
  }
}

int main()
{
   int arr[] = {10,20,30,10,30,40,10,40,10};

   int iRet = SearchFirst(arr,9,40);

   printf("%d\n",iRet);

    return 0;
}