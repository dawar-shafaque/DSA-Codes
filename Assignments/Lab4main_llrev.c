//WAP to display the linked list in an reverse order
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

void create(Node *ptr)
{
    scanf("%d",&ptr->data);
    ptr->next=(Node *)malloc(sizeof(Node));
    if(ptr->data!=-999)
        create(ptr->next);
    else
        ptr->next=NULL;
}

void display(Node *list)
{
    if(list->next!=NULL)
    {
        display(list->next);
        printf("%d \t",list->data);
    }
}

void main()
{
    Node *head=(Node*)malloc(sizeof(Node));
    printf("Enter the elements of the Node enter -999 to exit the entry of elements \n");
    create(head);
    printf("The list in reverse order is \n");
    display(head);
}