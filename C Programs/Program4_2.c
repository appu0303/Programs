#include<stdio.h>

void MultFact(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
   
    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt )== 0)
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

     MultFact(iValue);


    return 0;
}