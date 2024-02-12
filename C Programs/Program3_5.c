#include<stdio.h>
#include<stdbool.h>

bool DisplayConvert(char ch)
{
    if(ch == 97 || ch == 65 || ch == 101 || ch == 69 || ch == 105 || ch == 73 || ch == 111 || ch == 79 || ch == 117 || ch == 85)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    char cValue = '\0';

    bool bCheck = false;

    printf("Enter character\n");
    scanf("%c",&cValue);

   bCheck = DisplayConvert(cValue);

   if(bCheck == true)
   {
    printf("The given character is a vowel\n");
   }
   else
   {
    printf("The given character not is a vowel\n");
   }


    return 0;
}