
#include<stdio.h>
#include<iostream>
using namespace std;

 template<class T>

T Display(T value, int size)
{
   for(int i = 0; i < size; i++)
   {
        cout<<value<<"\t";
   }
   printf("\n");
}

int main()
{
    Display<char>('M',7);
    Display<int>(11,3);
    Display<float>(3.7,6);

    return 0;
}