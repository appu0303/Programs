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

void SecMaximum(PNODE Head)
{
    int first = 0;
    int second = 0;
    PNODE temp = Head;

    first = second;
  while(temp != NULL)
  {
    if(temp->data > first)
    {
        second = first;
        first = temp->data;
    }
  else if(temp->data > second && temp->data != first)
  {
    second = temp->data;
  }
  temp = temp->next;  
}
printf("Second largest element is %d\n",second);
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

      SecMaximum(First);

    // printf("Second Maximum elements is %d.\n",iRet);

    return 0;
}