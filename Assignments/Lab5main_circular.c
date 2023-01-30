/*
Write a menu driven program to perform the following operations in a single circular linked 
    list by using suitable user ddefined functions for each case.
    a) Traverse the list
    b) check if the list is empty
    c)  insert a Node at a certain position.
    d) delete a l5q1node453 at the certain position.
    e) delete the l5q1node453 for a given key.
    f) count the number of l5q1node453s.
    g) search for an element in the linked list.
*/

// #include <stdio.h>
// #include <stdlib.h>
typedef struct l5q1node453
{
    int data;
    struct l5q1node453 *nxt;
}l5q1node453;

void l5q1create(l5q1node453 *list,l5q1node453 *head)
{
    scanf("%d",&list ->data);

    if(list->data==-999)
        list->nxt=head;
    else
    {
        list->nxt = (l5q1node453 *)malloc(sizeof(l5q1node453));
        l5q1create(list->nxt,head);
    }
}

l5q1node453*  l5q1transversal(l5q1node453 *list)
    {
        l5q1node453 *first=(l5q1node453 *)malloc(sizeof(l5q1node453));
        first=list;
        while(list->nxt->nxt!=first)
            list=list->nxt;
        return list;
    }

int l5q1count(l5q1node453 *list,int c,l5q1node453 *first)
{
    if(list->nxt!=first)
    {
        c++;
        list=list->nxt;
        l5q1count(list,c,first);
    }
    else
        return c;
}

void l5q1empty(l5q1node453 *list)
{
    if(l5q1count(list,0,list)!=0)
        printf("The list is not empty\n");
    else
        printf("The list is empty\n");
}

l5q1node453* l5q1insert_begin(l5q1node453 *list)
{   
    l5q1node453 *last=l5q1transversal(list);  
    l5q1node453 *temp=(l5q1node453 *)malloc(sizeof(l5q1node453));
        int b;    
            printf("Enter the data you want to enter in the new l5q1node453 ");
            scanf("%d",&b);
        temp->data=b;
        temp->nxt=list;
        
        last->nxt->nxt=temp;
        
        list=temp;
    return list;
}

void l5q1insert_mid(l5q1node453 *list,int a)
{
    l5q1node453 *temp=(l5q1node453 *)malloc(sizeof(l5q1node453));   
        int b;    
            printf("Enter the data you want to enter in the new l5q1node453 ");
            scanf("%d",&b);
        for(int i=0;i<a-2;i++)
            list=list->nxt;
        temp->data=b;
        temp->nxt=list->nxt;
        list->nxt=temp;
}

void l5q1insert_end(l5q1node453 *list)
{
    l5q1node453 *last=l5q1transversal(list);
    l5q1node453 *temp=(l5q1node453 *)malloc(sizeof(l5q1node453));   
        int b;    
            printf("Enter the data you want to enter in the new l5q1node453 ");
            scanf("%d",&b);
        temp->data=b;
        temp->nxt=last->nxt;
        last->nxt=temp;
}

l5q1node453* l5q1delete_begin(l5q1node453 *list)
{
    
    l5q1node453 *temp=(l5q1node453 *)malloc(sizeof(l5q1node453));
    l5q1node453 *last=l5q1transversal(list);
    temp=list->nxt;
    free(list);
    list=temp;
    last->nxt->nxt=list;
    return list;
}   
void l5q1delete_mid(l5q1node453 *list,int a)
{
    
    l5q1node453 *temp=(l5q1node453 *)malloc(sizeof(l5q1node453));
        for(int i=0;i<a-2;i++)
            list=list->nxt;
        temp=list->nxt;
    list->nxt=temp->nxt;
        free(temp);
}

void l5q1delete_end(l5q1node453 *list)
{
    l5q1node453 *last=l5q1transversal(list);
        while(list->nxt!=last)
            list=list->nxt;
    list->nxt=last->nxt;
    free(last);
}

void l5q1deletekey(l5q1node453 *list,int dat)
{
    l5q1node453 *temp=(l5q1node453 *)malloc(sizeof(l5q1node453));
    for(temp=list;temp->nxt->data!=dat;temp=temp->nxt);
    list=temp;
    temp=list->nxt;
    list->nxt=list->nxt->nxt;
    free(temp);
}

void l5q1search(l5q1node453 *list,int dat)
{
    int c=0;
    l5q1node453 *first=list;
    while(list->nxt!=first)
    {
        if(list->data==dat)
            c++;
        list=list->nxt;
    }

    if(c>0)
        printf("The element entered is found in the list\n");
    else   
        printf("The element entered is not found in the list\n");
}

void l5q1display(l5q1node453 *list,l5q1node453* first)
{
    if(list->nxt->nxt!=first)
    {
        printf("%d \n",list->data);
        list=list->nxt;
        l5q1display(list,first);
    }
    else
    {
        printf("%d\n",list->data);
        printf("%d\n",first->data);
    }
}
void main_circular()
{
    l5q1node453 *head=(l5q1node453 *) malloc(sizeof(l5q1node453));
    printf("Enter the elements of the l5q1node453 enter -999 to exit the entry of elements \n");
    l5q1create(head,head);
    printf("1.Transversal \n");
    printf("2.Check if list is empty \n");
    printf("3.Insert the l5q1node453 at beginnig \n ");
    printf("4.Insert the l5q1node453 at given position \n ");
    printf("5.Insert the l5q1node453 at end \n ");
    printf("6.Delete the l5q1node453 at begining \n");
    printf("7.Delete the l5q1node453 at given position \n");
    printf("8.Delete the l5q1node453 at end \n");
    printf("9.Delete the l5q1node453 for a given key \n");
    printf("10.Count the number of l5q1node453s \n");
    printf("11.Search an element \n");
    char ch;
    printf("Enter y each time you want to use the menu ");
    scanf(" %c",&ch);
    int c;
    int a,b;
    l5q1node453 *temp=(l5q1node453 *)malloc(sizeof(l5q1node453));
    while(ch=='y')
    {
    printf("Enter the character for you given choice \n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            temp=l5q1transversal(head);
            printf("After transversal the value of last l5q1node453 is %d \n",temp->data);
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch);
            break;

        case 2:
            printf("The number of l5q1node453s is the list %d \n",l5q1count(head,0,head));
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch);
            break;

        case 3:
            head=l5q1insert_begin(head);
            
            printf("After insertion the new linked list is\n");
            l5q1display(head,head);

            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch);
            break;
            
        case 4:
            printf("Enter the position you want to enter the new l5q1node453 ");
            scanf(" %d",&a);
            l5q1insert_mid(head,a);
            
            printf("After insertion the new linked list is\n");
            l5q1display(head,head);

            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch);
            break;
     
        case 5:
            l5q1insert_end(head);
            printf("After insertion the new linked list is\n");
            l5q1display(head,head);

            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch);
            break;

        case 6:
            head=l5q1delete_begin(head);
            
            printf("After deletion the new linked list is\n");
            l5q1display(head,head);
            
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch);
            break;

        case 7:
            printf("Enter the position you want to delete ");
            scanf("%d",&a);
            l5q1delete_mid(head,a);
            printf("After deletion the new linked list is\n");
            l5q1display(head,head);
            
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch);
            break;
     
        case 8:
            l5q1delete_end(head);
            printf("After deletion the new linked list is\n");
            l5q1display(head,head);
            
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch);
            break;

        case 9:
            printf("Enter the data whose l5q1node453 you want to delete ");
            scanf("%d",&a);
            l5q1deletekey(head,a);
            printf("After deletion the new linked list is\n");
            l5q1display(head,head);
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch);
            break;
        case 10:
            printf("The number of l5q1node453s in the linked list is %d \n",l5q1count(head,0,head));
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch);
            break;
        case 11:
            printf("Enter the element you want to search ");
            scanf("%d",&a);
            l5q1search(head,a);
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch);
            break;
        default:
            printf("Wrong choice\n");
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch);
    }
    }
}