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

void DisplaySmall(PNODE Head)
{

  while(Head != NULL)
  {
    int iMin = Head->data;
    int digit = 0;
    
    while(Head->data != 0)
    {
           digit = Head->data % 10;
            if(digit < iMin)
            {
                iMin = digit;
            }
            Head->data= Head->data / 10;       
    }
    printf("%d ",iMin);
    Head = Head -> next;
  }
  printf("\n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);
    
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

     DisplaySmall(First);

    return 0;
}
