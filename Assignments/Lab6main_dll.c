/*
WAP to perform the following operations in a double linked list by using suitable user defined
    for each case.
    a)  traverse forward
    b)  traverse backward
    c)  check if the linked list in empty.
    d)  insert the l6q1Node453 at any position(begining/mid/end)
    e)  delete the l6q1Node453 at any position(begining/mid/end)
    f)  delete the l6q1Node453 for any given key.
    g)  count the total number of l6q1Node453s.
    h)  search in the linked list.
    Validate and verify each function from the main method.*/

// #include <stdio.h>
// #include <stdlib.h>
typedef struct l6q1Node453
{
    struct l6q1Node453 *prev;
    int data;
    struct l6q1Node453 *nxt;
}l6q1Node453;

void l6q1create(l6q1Node453 *head)
{
    scanf("%d",&head ->data);

    if(head->data==-999)
    {
        head->nxt=NULL;
        head->prev =head;
    }
    else
    {
        head->nxt = (l6q1Node453 *)malloc(sizeof(l6q1Node453));
        head->nxt->prev =head;
        l6q1create(head->nxt);
    }
}

l6q1Node453*  l6q1transversal(l6q1Node453 *list)
{
    while(list->nxt->nxt!=NULL)
        list=list->nxt;
    return list;
}

int l6q1count(l6q1Node453 *list,int c)
{
    if(list!=NULL)
    {
        c++;
        list=list->nxt;
        l6q1count(list,c);
    }
    else
        return c-1;
}

void l6q1empty(l6q1Node453 *list)
{
    if(l6q1count(list,0)!=0)
        printf("The list is not empty\n");
    else
        printf("The list is empty\n");
}

l6q1Node453* l6q1insert_begin(l6q1Node453 *list)
{
    
    l6q1Node453 *temp=(l6q1Node453 *)malloc(sizeof(l6q1Node453));   
        int b;    
            printf("Enter the data you want to enter in the new l6q1Node453 ");
            scanf("%d",&b);
        temp->data=b;
        temp->nxt=list;
        list=temp;
    return list;
}

void l6q1insert_mid(l6q1Node453 *list,int a)
{
    l6q1Node453 *temp=(l6q1Node453 *)malloc(sizeof(l6q1Node453));   
        int b;    
            printf("Enter the data you want to enter in the new l6q1Node453 ");
            scanf("%d",&b);
        for(int i=0;i<a-2;i++)
            list=list->nxt;
        temp->data=b;
        temp->nxt=list->nxt;
        temp->prev=list;
        list->nxt=temp;
}

void l6q1insert_end(l6q1Node453 *list)
{
    l6q1Node453 *temp=(l6q1Node453 *)malloc(sizeof(l6q1Node453));   
        int b;    
            printf("Enter the data you want to enter in the new l6q1Node453 ");
            scanf("%d",&b);
        while(list->nxt->nxt!=NULL)
            list=list->nxt;
        temp->data=b;
        temp->nxt=list->nxt;
        temp->prev=list;
        list->nxt=temp;
}

l6q1Node453* l6q1delete_begin(l6q1Node453 *list)
{
    
    l6q1Node453 *temp=(l6q1Node453 *)malloc(sizeof(l6q1Node453));
    
    temp=list->nxt;
    free(list);
    list=temp;
    list->prev=NULL;
    return list;
}    
void l6q1delete_mid(l6q1Node453 *list,int a)
{
    
    l6q1Node453 *temp=(l6q1Node453 *)malloc(sizeof(l6q1Node453));
        for(int i=0;i<a-2;i++)
            list=list->nxt;
        temp=list->nxt;
    list->nxt=temp->nxt;
    list->nxt->prev=temp->prev;
        free(temp);
}

void l6q1delete_end(l6q1Node453 *list)
{
   l6q1Node453 *temp=(l6q1Node453 *)malloc(sizeof(l6q1Node453));
        while(list->nxt->nxt!=NULL)
            list=list->nxt;
        temp=list->nxt;
    list->nxt=list->nxt->nxt;
    list->nxt->nxt->prev=temp->prev;
    free(temp);
}

void l6q1deletekey(l6q1Node453 *list,int dat)
{
    l6q1Node453 *temp=(l6q1Node453 *)malloc(sizeof(l6q1Node453));
    for(temp=list;temp->nxt->data!=dat;temp=temp->nxt);
    list=temp;
    temp=list->nxt;
    list->nxt=list->nxt->nxt;
    list->nxt->prev=temp->prev;
    free(temp);
}

void l6q1search(l6q1Node453 *list,int dat)
{
    int c=0;
    while(list->nxt!=NULL)
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

void l6q1display(l6q1Node453 *list)
{

    if(list->nxt!=NULL)
    {
        printf("%d \n",list->data);
        list=list->nxt;
        l6q1display(list);
    }
}

void l6q1transversal_b(l6q1Node453 *list)
{
    l6q1Node453 *last=l6q1transversal(list);
    while(last->prev->prev!=NULL)
    {
        
        printf("%d \n",last->data);
        last=last->prev;
    }
}

void main_dll()
{
    l6q1Node453 *head=(l6q1Node453 *) malloc(sizeof(l6q1Node453));
    printf("Enter the elements of the l6q1Node453 enter -999 to exit the entry of elements \n");
    l6q1create(head);
    printf("1.Transversal \n");
    printf("2.Check if list is empty \n");
    printf("3.Insert the l6q1Node453 at beginnig \n ");
    printf("4.Insert the l6q1Node453 at given position \n ");
    printf("5.Insert the l6q1Node453 at end \n ");
    printf("6.Delete the l6q1Node453 at begining \n");
    printf("7.Delete the l6q1Node453 at given position \n");
    printf("8.Delete the l6q1Node453 at end \n");
    printf("9.Delete the l6q1Node453 for a given key \n");
    printf("10.Count the number of l6q1Node453s \n");
    printf("11.Search an element \n");
    printf("12.Traverse backwards \n");
    int n;
    printf("Enter 1 each time you want to use the menu ");
    scanf("%d",&n);
    while(n==1)
    {
    printf("Enter the character for you given choice \n");
    int c;
    scanf("%d",&c);
    int a,b;
    
    switch(c)
    {
        case 1:
            printf("After transversal the value of last l6q1Node453 is %d \n",l6q1transversal(head)->data);
            printf("Enter 1 each time you want to use the menu ");
    scanf("%d",&n);
            break;

        case 2:
            printf("The number of l6q1Node453s is the list %d \n",l6q1count(head,0));
            printf("Enter 1 each time you want to use the menu ");
    scanf("%d",&n);
            break;

        case 3:
            head=l6q1insert_begin(head);
            
            printf("After insertion the new linked list is\n");
            l6q1display(head);

            printf("Enter 1 each time you want to use the menu ");
            scanf("%d",&n);
            break;
            
        case 4:
            printf("Enter the position you want to enter the new l6q1Node453 ");
            scanf("%d",&a);
            l6q1insert_mid(head,a);
            
            printf("After insertion the new linked list is\n");
            l6q1display(head);

            printf("Enter 1 each time you want to use the menu ");
            scanf("%d",&n);
            break;
     
        case 5:
            l6q1insert_end(head);
            printf("After insertion the new linked list is\n");
            l6q1display(head);

            printf("Enter 1 each time you want to use the menu ");
            scanf("%d",&n);
            break;

        case 6:
            head=l6q1delete_begin(head);
            
            printf("After deletion the new linked list is\n");
            l6q1display(head);
            
            printf("Enter 1 each time you want to use the menu ");
            scanf("%d",&n);
            break;

        case 7:
            printf("Enter the position you want to delete ");
            scanf("%d",&a);
            l6q1delete_mid(head,a);
            printf("After deletion the new linked list is\n");
            l6q1display(head);
            
            printf("Enter 1 each time you want to use the menu ");
            scanf("%d",&n);
            break;
     
        case 8:
            l6q1delete_end(head);
            printf("After deletion the new linked list is\n");
            l6q1display(head);
            
            printf("Enter 1 each time you want to use the menu ");
            scanf("%d",&n);
            break;

        case 9:
            printf("Enter the data whose l6q1Node453 you want to delete ");
            scanf("%d",&a);
            l6q1deletekey(head,a);
            printf("After deletion the new linked list is\n");
            l6q1display(head);
            printf("Enter 1 each time you want to use the menu ");
    scanf("%d",&n);
            break;
        case 10:
            printf("The number of l6q1Node453s in the linked list is %d \n",l6q1count(head,0));
            printf("Enter 1 each time you want to use the menu ");
    scanf("%d",&n);
            break;
        case 11:
            printf("Enter the element you want to search ");
            scanf("%d",&a);
            l6q1search(head,a);
            printf("Enter 1 each time you want to use the menu ");
    scanf("%d",&n);
            break;
        case 12:
            printf("After transversal backwards \n");
             l6q1transversal_b(head);
            printf("Enter 1 each time you want to use the menu ");
    scanf("%d",&n);
            break;
        default:
            printf("Wrong choice\n");
            printf("Enter 1 each time you want to use the menu ");
    scanf("%d",&n);
    }
    }
}