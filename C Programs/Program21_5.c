#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    
    for(int i = 1; i <= iRow; i++)
    {
    
       for(int j = 1; j <= iCol; j++ )
       {
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("%d\t",j);
            }
            else
             {
                printf("*\t");
            }
        }
       
       printf("\n\n");
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