#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int k = 0;
    for(int i = 1; i <= iRow; i++)
    {
       
       for(int j = 1; j <= iCol; j++ )
       {
        printf("%d\t",++k);

         if(k == 9)
            k = 0;
       }
       printf("\n");
    }   
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows & columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}