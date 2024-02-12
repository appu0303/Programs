#include<stdio.h>

int DisplayDigit(char *str)
{
    int iCnt = 0;
  while(*str != '\0')
  {
    if(*str == ' ')
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
    //scanf("%[^'\n']s",arr);
    gets(arr);

    iRet = DisplayDigit(arr);

    printf("Count of white spaces : %d",iRet);

    return 0;
}