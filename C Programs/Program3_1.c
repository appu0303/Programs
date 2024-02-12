#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int i = 1;

    printf("First %d even nos are : ",iNo);

    int iCount = 0;

while(iCount <= iNo )
  {
        if(i % 2 == 0)
        {
            printf("%d\t",i);
            iCount++;
        }
        if(iCount == iNo)
        break;

        i++;
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);
}