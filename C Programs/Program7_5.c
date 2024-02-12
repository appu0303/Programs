#include<stdio.h>

void Table(int iNo)
{
   for(int i = 10; i >= 1; i--)
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