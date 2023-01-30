//wap to implement double linked list using single linked list
// #include <stdio.h>
// #include <stdlib.h>
typedef struct l6q4Node453
{
    int data;
    struct l6q4Node453 *next;
}l6q4Node453;
typedef struct l6q4dNode453
{
    struct l6q4dNode453 *prev;
    int data;
    struct l6q4dNode453 *next;
}l6q4dNode453;
void l6q4create(l6q4Node453 *head)
{
    scanf("%d",&head ->data);
    if(head->data==-999)
    {
        head->next=NULL;
    }
    else
    {
        head->next = (l6q4Node453 *)malloc(sizeof(l6q4Node453));
        l6q4create(head->next);
    }
}
void l6q4display(l6q4Node453 *head)
{
    if(head->next!=NULL)
    {
        printf("%d \t",head->data);
        l6q4display(head->next);
    }
}
void l6q4dcreate(l6q4dNode453 *dhead,l6q4Node453 *head)
{
    dhead->data=head->data;
    if(head->next!=NULL)
    {
        dhead->next=(l6q4dNode453 *)malloc(sizeof(l6q4dNode453));
        dhead->next->prev=dhead;
        l6q4dcreate(dhead->next,head->next);
    }
    else
    {
        dhead->next=NULL;
    }
}
void l6q4ddisplay(l6q4dNode453 *dhead)
{
    if(dhead->next!=NULL)
    {
        printf("%d \t",dhead->data);
        l6q4ddisplay(dhead->next);
    }
}
void main_imp()
{
    l6q4Node453 *head=(l6q4Node453*)malloc(sizeof(l6q4Node453));
    l6q4dNode453 *dhead=(l6q4dNode453*)malloc(sizeof(l6q4dNode453));
    printf("Enter the elements of the l6q4Node453 enter -999 to exit the entry of elements \n");
    l6q4create(head);
    printf("The list  is \n");
    l6q4display(head);
    l6q4dcreate(dhead,head);
    printf("The double linked list is \n");
    l6q4ddisplay(dhead);
}