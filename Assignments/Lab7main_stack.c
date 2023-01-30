/*Write a menu driven program to perform the following operation of a stack by using
    array by using suitable user defined function for each case.
    a)check if the stack is empty
    b)display the contents of stack
    c)push 
    d)pop
*/
#include <stdio.h>
#include <stdlib.h>

int top=-1;
int n;
int *arr;
void push()
{
    if(top<n)
    {
        top++;
        scanf("%d",&arr[top]);
    } 
    else
        printf("OverFlow");
        
}

void pop()
{
    if(top>-1)
    {
        free(arr+top);
        top--;
    }
    else
        printf("REACHED UNDERFLOW");
}

int isEmpty()
{
    if (top==-1)
        return 1;
    else    
        return 0;
} 

int isFull()    
{
    if (top==n-1)
        return 1;
    else    
        return 0;
}

void display()
{
    while(top>-1)
    {
        printf("%d \t",arr[top]);
        free(arr+top);
        top--;
    }
}

int main()
{
    printf("Enter the size of the stack\n");
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int));
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
                display(arr);
            break;

            case 3:
                printf("Enter the elements\n");
                push(arr);
            break;

            case 4:
                pop(arr);
            break;
            default:
                printf("SORRY WRONG CHOICE\n");
        }
       printf("\nEnter y if you want to enter your choice\n");
       scanf(" %c",&c); 
    }
return 0;

}