#include<stdio.h>

int main()
{

    char Name[30];
    printf("Please Enter full name: ");
    scanf("%[^\n]%*c",&Name);

    printf("Your name is :  %s\n",Name);

    return 0;
}