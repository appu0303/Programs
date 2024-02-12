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

void Palindrome(PNODE Head)
{

  printf("Palindrome numbers are : \n");
  while(Head != NULL)
  {
    int rem = 0, iReverse = 0;
    int iCopy = Head->data;
    while(Head->data != 0)
    {
            rem = Head->data % 10;
            iReverse = iReverse * 10 + rem;
            Head->data= Head->data / 10;
        
    }
   if(iReverse == iCopy)
   {
    printf("%d ",iCopy);
   }
    Head = Head -> next;
  }
  printf("\n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 414);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);
    
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

     Palindrome(First);

    return 0;
}
