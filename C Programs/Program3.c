#include<stdio.h>

void Display()
{
    int i = 0;
    //int j = 5;

    for( i = 5; i >= 1; i--)
    {
        printf("%d\t",i);
    }
}

int main()
{
    Display();
    return 0;
}