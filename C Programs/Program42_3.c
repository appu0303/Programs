#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<String.h>

int CountWhite(char FName[])
{
    int fd = 0, iRet = 0;
    char Arr[100]= {'\0'};
    int i = 0;
    int iCount = 0;

    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file.\n");
    }
    else
    {

        printf("%s gets opened succesfully with file descriptor %d\n",FName,fd);

        while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
        {
            for(i = 0; i < iRet; i++)
            {
                if(Arr[i] == ' ')
                {
                    iCount++;
                }
            }
        }
    }
    return iCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter the filename : ");
    scanf("%s",&FileName);

    iRet = CountWhite(FileName);

    printf("Number of white spaces are : %d.\n",iRet);

    return 0;
}