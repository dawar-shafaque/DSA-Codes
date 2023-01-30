/*
WAP to create a double linked list of n l6q2Node453s and display the linked list by using suitable user
    defined functions for create and display operations.
    */

// #include <stdio.h>
// #include <stdlib.h>

typedef struct l6q2Node453
{
    struct l6q2Node453 *prev;
    int data;
    struct l6q2Node453 *nxt;
}l6q2Node453;

void l6q2create(l6q2Node453 *head)
{
    scanf("%d",&head ->data);

    if(head->data==-999)
    {
        head->nxt=NULL;
        head->prev =head;
    }
    else
    {
        head->nxt = (l6q2Node453 *)malloc(sizeof(l6q2Node453));
        head->nxt->prev =head;
        l6q2create(head->nxt);
    }
}
/*
l6q2Node453* delete_begin(l6q2Node453 *list)
{
    
    l6q2Node453 *temp=(l6q2Node453 *)malloc(sizeof(l6q2Node453));
    
    temp=list->nxt;
    free(list);
    list=temp;
    list->prev=NULL;
    return list;
}   

void delete_mid(l6q2Node453 *list,int a)
{
    
    l6q2Node453 *temp=(l6q2Node453 *)malloc(sizeof(l6q2Node453));
        for(int i=0;i<a-2;i++)
            list=list->nxt;
        temp=list->nxt;
    list->nxt=temp->nxt;
    list->nxt->prev=temp->prev;
        free(temp);
}

void delete_end(l6q2Node453 *list)
{
   l6q2Node453 *temp=(l6q2Node453 *)malloc(sizeof(l6q2Node453));
        while(list->nxt->nxt!=NULL)
            list=list->nxt;
        temp=list->nxt;
    list->nxt=list->nxt->nxt;
    list->nxt->nxt->prev=temp->prev;
    free(temp);
}
*/

void l6q2display(l6q2Node453 *list)
{

    if(list->nxt!=NULL)
    {
        printf("%d \n",list->data);
        list=list->nxt;
        l6q2display(list);
    }
}

void main_double()
{
    l6q2Node453 *head=(l6q2Node453*)malloc(sizeof(l6q2Node453));
    head->prev=NULL;
    printf("Enter the elements of the l6q2Node453 enter -999 to exit the entry of elements \n");
    l6q2create(head);
    /* printf("1.Delete the l6q2Node453 at begining \n");
    printf("2.Delete the l6q2Node453 at given position \n");
    printf("3.Delete the l6q2Node453 at end \n");
    printf("Enter the character for you given choice \n");
    int c,a;
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            head=delete_begin(head);
            break;

        case 2:
            printf("Enter the position you want to delete ");
            scanf("%d",&a);
            delete_mid(head,a);
            break;
     
        case 3:
            delete_end(head);
            printf("After deletion the new linked list is\n");
            display(head);
            break;
        default:
            printf("Wrong choice\n");
    } */
    printf("The list  is \n");
    l6q2display(head);
}