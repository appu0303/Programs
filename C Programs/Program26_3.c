#include<stdio.h>

int Difference(char *str)
{
    int iCntCaps = 0;
    int iCntSmall = 0;


    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCntCaps++;

        }
         if((*str >= 'a') && (*str <= 'z'))
        {
            iCntSmall++;

        }
        str++;
    }
    return iCntSmall - iCntCaps;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("Difference between small and capital characters is : %d\n",iRet);

    return 0;
}