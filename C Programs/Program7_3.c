#include<stdio.h>

int Factorial(int iNo)
{
      if(iNo < 0)
    {
        iNo = iNo * -1;
    }
  
    int fact = 1;

    for(int i = iNo; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

   iRet = Factorial(iValue);

   printf("Factorial of number is %d\n",iRet);

    return 0;
}