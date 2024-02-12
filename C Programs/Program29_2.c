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

int SearchLastOcc(PNODE Head, int no)
{
    int size = 0, i = 0;
    PNODE temp = Head;
    size = Count(Head);
    int pos = 0;

    if((Head == NULL))
    {
        printf("Empty LinkedList !\n");
        return 0;
    }

    while(temp != NULL)
    {
        i++;
        if((temp->data) == no)
        {
            pos = i; 
        }
        temp = temp -> next;
    }
    return pos;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0, iValue = 0, pos = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);
    
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    printf("Enter the number to search : \n");
    scanf("%d",&iValue);

    pos = SearchLastOcc(First,iValue);

    printf("Last Position : %d\n",pos);



    return 0;
}