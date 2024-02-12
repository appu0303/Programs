#include<stdio.h>

int NonFact(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int sum = 0;
   
   printf("Non factors of %d are : \n",iNo);
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt )!= 0)
        {
            sum = sum + iCnt;
        }
    }
    return sum;

}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

     iRet = NonFact(iValue);
     printf("Sum of all non factors of %d is %d ",iValue,iRet);


    return 0;
}