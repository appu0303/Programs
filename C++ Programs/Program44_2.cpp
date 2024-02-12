
#include<stdio.h>

 template <class T>

T Max(T no1, T no2, T no3)
{
    T max;
    if((no1 > no2) && (no1 > no3))
        max = no1;
    else if((no2 > no1) && (no2 > no3))
        max = no2;
    else
        max = no3;
    return max;
}

int main()
{
    int iRet = Max(100,50,30);
    printf("Max number is : %d\n",iRet);

    return 0;
}