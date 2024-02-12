#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iMult = 0;
     for(int iCnt = 1; iCnt <= 5; iCnt++ )

    {
         iMult = iNo * iCnt ;
        {
            printf("%d\t",iMult);
        }
    }

    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

   MultipleDisplay(iValue);

    return 0;
}