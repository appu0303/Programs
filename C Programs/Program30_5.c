#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)   // LL is empty
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("Contents of Linked List : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

void SumDigit(PNODE Head)
{
    int iSum = 0;
    int i = 0;

  while(Head != NULL)
  {
    iSum = 0;
    int Digit = 0;
    while(Head->data != 0)
    {
            Digit = Head->data % 10;
            iSum = iSum + Digit;
            Head->data= Head->data / 10;
        
    }
    printf("%d ",iSum);
    Head = Head -> next;
  }
  printf("\n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);
    
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

     SumDigit(First);

    return 0;
}