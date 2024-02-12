#include<stdio.h>
#include<stdbool.h>

void Reverse(char *str)
{
    
    int len = 0;

    while(*str != '\0')
    {
        len++;
        str++;
    }
    printf("Length of string is %d.",len);

    int i = 0, j = (len-1);
    int temp = 0;

    while(j >= i)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;

        j--;
        
    }

    printf("The reversed string is : %s\n",str);
    
}
int main()
{
    char arr[50];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}