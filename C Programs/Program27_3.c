#include<stdio.h>

void strtogglex(char *str)
{
  while(*str != '\0')
  {
    if(*str >= 'a' && *str <= 'z')
    {
      *str = *str-32;
       printf("%c",*str);
    } 
    
  else if(*str >= 'A' && *str <= 'Z')
  {
    {
      *str = *str+32;
    }
    printf("%c",*str);

  }
  else
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
    //scanf("%[^'\n']s",arr);
    gets(arr);

    strtogglex(arr);

    return 0;
}