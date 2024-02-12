#include<stdio.h>

int RangeSumn(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return ;
    }
    int iSum = 0;
    for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
       iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0,iRet;

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    iRet = RangeSumn(iValue1,iValue2);

    printf("Addition is : %d \n",iRet);

    return 0;
}