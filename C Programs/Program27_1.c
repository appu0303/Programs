#include<stdio.h>

void strlwrx(char *str)
{
  while(*str != '\0')
  {
    if(*str >= 'A' && *str <= 'Z')
    {
      *str = *str+32;
    }
    printf("%c",*str);

    str++;
  }
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    return 0;
}