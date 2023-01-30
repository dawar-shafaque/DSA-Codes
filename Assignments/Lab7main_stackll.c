/*
Write a menu driven program to perform the following operations of a stack using linked node 
    by using suitable user defined functions for each case.
    a)check if the stack is empty
    b)display the contents of stack
    c)push
    d)pop
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next; 
}node;
node* top;

void push()
{
    node* temp=(node *)malloc(sizeof(node));
    if(!temp)
        printf("OverFlow");
    else
    {
        
        scanf("%d",&temp->data);
        temp->next=top;
        top=temp;
    }
        
        
}

void pop()
{
    node* temp;

    if(top!=NULL)
    {
        temp=top;
        top=top->next;
        free(temp);
    }
    else
        printf("REACHED UNDERFLOW");
}

int isEmpty()
{
    if (top==NULL)
        return 1;
    else    
        return 0;
}

void display()
{
    node* temp;

    if(top!=NULL)
    {
        temp=top;
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
    }
    else
        printf("REACHED UNDERFLOW");
}

int main()
{
    printf("1. Check if the stack is empty\n");
    printf("2. Display the contents of the stack\n");
    printf("3. Push\n");
    printf("4. Pop\n");
    
    char c;
    printf("Enter y if you want to enter your choice\n");
    scanf(" %c",&c);
    while(c=='y')
    {
        printf("Enter your choice from the above menu\n");
        int i;
        scanf("%d",&i);
        switch(i)
        {
            case 1:
            if(isEmpty()==1)
                printf("The stack is empty");
            else    
                printf("The stack is not empty");
            break;

            case 2:
                printf("The contents of the stack is \n");
                display();
            break;

            case 3:
                printf("Enter the elements\n");
                push();
            break;

            case 4:
                pop();
            break;
            default:
                printf("SORRY WRONG CHOICE\n");
        }
       printf("\nEnter y if you want to enter your choice\n");
       scanf(" %c",&c); 
    }
return 0;

}