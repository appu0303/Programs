
#include<stdio.h>
#include<iostream>
using namespace std;

 template<class T>

T Frequency(T *arr, int size, T iNo)
{
    int iCnt = 0;
   for(int i = 0; i < size; i++)
   {
        if(arr[i] == iNo)
        {
            iCnt++;
        }  
   }
  return iCnt;
}

int main()
{
   int arr[] = {10,20,30,10,30,40,10,40,10};

   int iRet = Frequency(arr,9,10);

   printf("%d\n",iRet);

    return 0;
}