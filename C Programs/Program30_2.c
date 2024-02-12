#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

void DisplayPrime(PNODE Head)
{
    int iSum = 0;
    int i = 0;

    printf("Prime numbers from given LinkedList are : \n\n");
  while(Head != NULL)
  {
    bool bFlag = false;
    for( i = 2; i <= Head->data / 2; i++)
    {
        if((Head->data) % i == 0)
        {
            bFlag = true;
            break;
        }
    }

    if(bFlag == false)
    {
        printf("%d ",Head->data);
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
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);
    
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

     DisplayPrime(First);

    return 0;
}