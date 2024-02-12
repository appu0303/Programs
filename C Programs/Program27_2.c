#include<stdio.h>

void struprx(char *str)
{
  while(*str != '\0')
  {
    if(*str >= 'a' && *str <= 'z')
    {
      *str = *str-32;
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

    struprx(arr);

    return 0;
}