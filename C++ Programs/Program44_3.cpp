
#include<stdio.h>

 template<class T>

T AddN(T *arr, int size)
{
    T sum = arr[0];

    int i = 0;

    for(i = 1; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};

    float brr[] = {10.0,3.7,9.8,8.7};

    int iSum = AddN(arr,5);
    printf("%d\n",iSum);

    float fSum = AddN(brr,4);
    printf("%f\n",fSum);

    return 0;
}