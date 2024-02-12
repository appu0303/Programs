#include<stdio.h>
#include<string.h>

int CountChar(char *str,char ch)
{
    int index = -1;
 for(int i = 0; i <= strlen(str);i++)
 {
    if(str[i] == ch)
    {
        index = i;
    }
 }
 return index;
  
}

int main()
{
    char arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter the String : \n");
   // scanf("%[^'\n']s",arr);
    gets(arr);

    printf("Enter a character : \n");
    scanf("%c",&cValue);

     iRet = CountChar(arr,cValue);
     printf("Last occurance is at %d index.\n",iRet);
    return 0;
}