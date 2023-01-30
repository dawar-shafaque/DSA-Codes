//WAP to reverse the sequence elements in a double linked list.
// #include <stdio.h>
// #include <stdlib.h>

typedef struct l6q5node453
{
    struct l6q5node453 *prev;
    int data;
    struct l6q5node453 *nxt;
}l6q5node453;

void l6q5create(l6q5node453 *head)
{
    scanf("%d",&head ->data);

    if(head->data==-999)
    {
        head->nxt=NULL;
        head->prev =head;
    }
    else
    {
        head->nxt = (l6q5node453 *)malloc(sizeof(l6q5node453));
        head->nxt->prev =head;
        l6q5create(head->nxt);
    }
}

void l6q5display(l6q5node453 *list)
{
    if(list->nxt!=NULL)
    {
        l6q5display(list->nxt);
        printf("%d \n",list->data);
    }
}
void main_rev()
{
    l6q5node453 *head=(l6q5node453*)malloc(sizeof(l6q5node453));
    head->prev=NULL;
    printf("Enter the elements of the l6q5node453 enter -999 to exit the entry of elements \n");
    l6q5create(head);
    printf("The list  is \n");
    l6q5display(head);
}