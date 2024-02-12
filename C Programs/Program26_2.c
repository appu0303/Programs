#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;

        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("Count of small characters is : %d\n",iRet);

    return 0;
}