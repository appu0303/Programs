#include<stdio.h>

void Display(int iNo)
{
    int PlusNum = -iNo;

     for(int iCnt = PlusNum; iCnt <= iNo; iCnt++ )
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

   Display(iValue);

    return 0;
}