#include<stdio.h>

void Pattern(int iNo)
{

    int iCnt = 1;
    int iCount = 0;
    while(iCount <= iNo)
    {
        if((iCnt % 2)==0)
        {
            printf("%d\t",iCnt);
            iCount++;
        }
        iCnt++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}