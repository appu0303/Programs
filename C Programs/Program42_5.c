#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<String.h>

void DisplayN(char FName[], int iCount)
{
    int fd = 0, iRet = 0;
    char Arr[100]= {'\0'};
    int i = 0;
    iCount = 0;

    fd = open(FName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file.\n");
    }
    else
    {

        printf("%s gets opened succesfully with file descriptor %d\n",FName,fd);

        iRet =  read(fd,Arr,iCount);

         printf("%d bytes gets succesfully read from the file\n",iRet);

        printf("Data from file is : %s\n",Arr);


        close(fd);


    }
}

int main()
{
    char FileName[30];
    int iRet = 0;
    int iCnt = 0;

    printf("Enter the filename : ");
    scanf("%s",&FileName);

    printf("Enter count : \n");
    scanf("%d",&iCnt);

    DisplayN(FileName,iCnt);

    return 0;
}