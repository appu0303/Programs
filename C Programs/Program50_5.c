#include<stdio.h>

int Reverse(int iNo)
{
    static int RevNo  = 0, iDigit = 0;

   if(iNo != 0) 
   {
        iDigit = iNo % 10;
        RevNo = RevNo * 10 + iDigit;
        iNo = iNo / 10;

        Reverse(iNo);
    }
        return RevNo;
}

int main()
{
    int iRet = 0, length = 0;
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);
    printf("Reverse number is : %d\n",iRet);

    return 0;
}


