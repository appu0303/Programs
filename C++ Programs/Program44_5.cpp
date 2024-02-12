
#include<stdio.h>

 template<class T>

T Min(T *arr, int size)
{
    T min = arr[0];
    
    
    int i = 0;

    for(i = 0; i < size; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int arr[] = {10,20,30,40,50};

    float brr[] = {10.0,3.7,9.8,8.7};

    int iRet = Min(arr,5);
    printf("%d\n",iRet);

    float fRet = Min(brr,4);
    printf("%f\n",fRet);

    return 0;
}