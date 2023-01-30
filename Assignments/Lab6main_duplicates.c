//WAP to remove the duplicates in a sorted double linked list.

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *nxt;
}Node;

void create(Node *head)
{
    scanf("%d",&head ->data);

    if(head->data==-999)
    {
        head->nxt=NULL;
        head->prev =head;
    }
    else
    {
        head->nxt = (Node *)malloc(sizeof(Node));
        head->nxt->prev =head;
        create(head->nxt);
    }
}

void search(Node *list,int dat)
{
    int c=0;
    while(list->nxt!=NULL)
    {
        if(list->data==dat)
            c++;
            list=list->nxt;
    
    }
        printf("The element %d is found in the list %d times. \n",dat,c);
}


void main()
{
    Node *head=(Node*)malloc(sizeof(Node));
    head->prev=NULL;
    printf("Enter the elements of the Node enter -999 to exit the entry of elements \n");
    create(head);
    Node *temp=head;
    while(temp->nxt!=NULL)
    {
            search(head,temp->data);
            temp=temp->nxt;
    }
}