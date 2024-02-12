#include<stdio.h>

void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = iNo * -1;
    }
   for(int i = 1; i <= 10; i++)
   {
        printf("%d\t",iNo*i);
   }
   printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}