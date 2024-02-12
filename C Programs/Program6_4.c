#include<stdio.h>

void OddDisplay(int iNo)
{
 int PlusNum = -iNo;

     for(int iCnt = 1; iCnt <= iNo; iCnt++ )

    {
        if(iCnt % 2 != 0)
        {
        printf("%d\t",iCnt);
        }
    }

    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

   OddDisplay(iValue);

    return 0;
}