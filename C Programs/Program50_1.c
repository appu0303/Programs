#include<stdio.h>

int strlenX(char *str, int x)
{
    static int iCnt = 0;
    
    if(*str != '\0')
    {
    
        if(*str == ' ')
       {
            iCnt = iCnt + 1;
           
       }
        strlenX(str + 1, x + 1);
    }
    return iCnt;
}


int main()
{
    int iRet = 0, length = 0;
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    iRet = strlenX(arr,length);
    printf("Length of string is : %d\n",iRet);

    return 0;
}


