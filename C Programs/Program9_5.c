#include<stdio.h>

double SquareMeter(int iNo)
{
   float fSquare = 0.0;

   fSquare = iNo * 0.0929;

   return fSquare;
}


int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:\n");
    scanf("%d",&iValue);


    dRet = SquareMeter(iValue);

    printf("%d Squarefeet is %f in square meter\n",iValue,dRet);

    return 0;
}