#include<stdio.h>

int FactDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int FactorSum = 0;
    int NonFactorSum = 0;
    int FactDiff = 0;
 
    for(iCnt = 1; iCnt <= iNo-1; iCnt++)
    {
        if((iNo % iCnt )== 0)
        {
            FactorSum = FactorSum + iCnt;
        }
        else
        {
            NonFactorSum = NonFactorSum + iCnt;
        }
    }
   // printf("Factorsum %d\n",FactorSum);
   // printf("NonFactorsum %d\n",NonFactorSum);
    FactDiff =  FactorSum - NonFactorSum ;

    return FactDiff;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet=FactDiff(iValue);
printf("Factor differnce is : %d\n",iRet);
    return 0;
}