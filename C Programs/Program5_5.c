#include<stdio.h>

float CalculatePercentage(int iNo1, int iNo2)

{
    float fPercentage = 0.0f;

    fPercentage = (((float)iNo2 / (float)iNo1) * 100.0);

    return fPercentage;
}

int main()
{

  int iValue1 = 0, iValue2 = 0;
float fRet = 0.0f;

  printf("Please enter total marks : ");
  scanf("%d",&iValue1);

   printf("Please enter obtained marks : ");
  scanf("%d",&iValue2);

  fRet = CalculatePercentage(iValue1, iValue2);

    printf("Your percentage are  : %f \n",fRet);

    return 0;
}