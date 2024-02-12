#include<stdio.h>

void NonFact(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
   
   printf("Non factors of %d are : \n",iNo);
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt )!= 0)
        {
            printf("%d\t",iCnt);
        }
    }

}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

     NonFact(iValue);


    return 0;
}