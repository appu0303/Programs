#include<stdio.h>
#include<stdbool.h>

void DisplayASCII()
{
    printf("\n----ASCII Table from 0 to 255------\n");
    printf("\n---------------------------\n");
    printf("Symbol\tDec\tHex\tOct\n");
    for(int i = 0; i <= 255; i++)
    {
        printf("%c\t%d\t%x\t%o\n",i,i,i,i);
    }

    printf("\n");
}

int main()
{
    DisplayASCII();

    return 0;

}