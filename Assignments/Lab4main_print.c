//WAP to print the mth node from the last in a link list of n nodes

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

int count_453(node *list,int c)
{
    if(list->next!=NULL)
    {
        c++;
        list=list->next;
        count_453(list,c);
    }
    else
        return c;
}
void create_453(node *ptr)
{
    scanf("%d",&ptr->data);
    ptr->next=(node *)malloc(sizeof(node));
    if(ptr->data!=-999)
        create_453(ptr->next);
    else
        ptr->next=NULL;
}

void display_453(node *list,int i)
{
    if(list->next!=NULL && i>0)
    {
        display_453(list->next,--i);
    }
    else if(i==0)
        printf("The nth node from the last is %d \n",list->data);
        
}

int main()
{
    node *head=(node*)malloc(sizeof(node));
    printf("Enter the elements of the node enter -999 to exit the entry of elements \n");
    create_453(head);
    int n;
    printf("Enter the nth node from the last you want to print \n");
    scanf("%d",&n);
    if(n>count_453(head,0))
        printf("INVALID INPUT ");
    else
        display_453(head,count_453 (head,0)-n);
        return 0;
}
