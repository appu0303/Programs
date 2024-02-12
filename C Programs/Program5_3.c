#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1, int iNo2)

{
  if(iNo1 == iNo2)
  return true;

else

  return false;
}

int main()
{

  int iValue1 = 0, iValue2 = 0;

  bool bRet = false;

  printf("Please enter first number : ");
  scanf("%d",&iValue1);

   printf("Please enter second number : ");
  scanf("%d",&iValue2);

  bRet = ChkEqual(iValue1, iValue2);

  if(bRet == true)
    printf("Equal");
else
    printf("Not Equal");

    return 0;
}