#include<stdio.h>

void DisplayDigit(char *str)
{

  while(*str != '\0')
  {
    if(*str >= '0' && *str <= '9')
    {
        printf("%c",*str);
     
    }
     str++; 
 
  }
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}