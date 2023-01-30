//WAP to convert an infix expression into its equivalent prefix notation.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

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

char* reverse(char* c)
{
    char *ch=(char *)malloc(sizeof(100));
    int i=0;
    int j=strlen(c)-1;
    while(c[i]!='\0')
    {
        ch[j]=c[i];
        i++;
        j--;
    }
    ch[i]='\0';

    strcpy(c,ch);
    return c;
}

int main()
{
    e = (char *)malloc(sizeof(100));
    printf("Enter the expression\n");
    char *p=(char *)malloc(sizeof(100));
    scanf("%s",e);
    int i=0;
    int j=0;
    e=reverse(e);
    while(e[i]!='\0')
    {
        if(isalnum(e[i]))
        {
            p[j]=e[i];
            j++;
        }
        else if(e[i]==')')
            push(e[i]);
        else if(e[i]=='(')
        {
            char x;     
            while((x=pop())!=')')
            {
                p[j]=x;
                j++;
            }
        }
    
        else
        {
            while(priority(top->data)<=priority(e[i]))
            {
                p[j]=pop();
                j++;
            }
            push(e[i]);
            
        }
        i++;
    }
    p[j]='\0';
    p=reverse(p);
    for(int i=0;p[i]!='\0';i++)
        printf("%c",p[i]);
    return 0;
    
}