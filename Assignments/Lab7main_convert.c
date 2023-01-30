//WAP to convert an infix eression into its equivalent postfix notation.
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    char data;
    struct node* next;
}stack;
stack* top;
char* e;

void push(char op)
{
    stack* temp=(stack *)malloc(sizeof(stack));     
    temp->data=op;
    temp->next=top;
    top=temp;
}

char pop()
{
    stack* temp;
    char ele;
    if(top!=NULL)
    {
        ele= top->data;
        temp=top;
        top=top->next;
        free(temp);
    }
    else
        printf("REACHED UNDERFLOW");
    return ele;
}

int priority(char x)
{
    if(x=='(')
        return 0;
    if(x=='+'||x=='-')
        return 1;
    if(x=='*'||x=='/')
        return 2;
    if(x=='^')
        return 3;
}



int main_convert()
{
    e = (char *)malloc(sizeof(100));
    printf("Enter the expression\n");
    scanf("%s",e);
    int i=0;
    while(e[i]!='\0')
    {
        if(isalnum(e[i]))
            printf("%c",e[i]);
        else if(e[i]=='(')
            push(e[i]);
        else if(e[i]==')')
        {
            char x;     
            while((x=pop())!='(')
                printf("%c",x);
        }
        else
        {
            while(priority(top->data)>=priority(e[i]))
                printf("%c",pop());
            push(e[i]);
        }
        i++;
    }
    while(top!=NULL)
        printf("%c",pop());
    return 0;
    
}