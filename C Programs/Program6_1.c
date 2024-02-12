#include<stdio.h>

void Pattern(int iNo)
{
     for(int iCnt = 1; iCnt <= iNo; iCnt++ )
    {
        printf("$   *\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter how many number of times you want to print $  * on screen\n");
    scanf("%d",&iValue);

   Pattern(iValue);

    return 0;
}