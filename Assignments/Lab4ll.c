/* WAP which is menu driven to perform the following operations in a linked list
    a) transversal
    b) check if list is empty
    c) insert a Node
    d) delete a Node
    e) delete a Node for a given key
    f) count the number of Nodes
    g) search for an element
    */ 

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data; 
    struct Node *next; 
}Node;
void traversal(struct Node *ptr)
{   
    int i =1;
    while(ptr!=NULL)
    {
        printf("The element %d is %d", i, ptr->data); 
        ptr= ptr->next; 
        i++;
    }
} 
void create(Node *ptr)
{
    scanf("%d",&ptr->data); 
    if(ptr->data==-999)
        ptr->next=NULL; 
    else 
    {
        ptr->next=(Node *)malloc(sizeof(Node)); 
        create(ptr->next);
    }
}

void print(Node *ptr)
{
    Node *temp;
    for(temp=ptr;temp->next!=NULL;temp=temp->next)
    {
        printf("%d\t",temp->data);
    } 
} 

int count(Node *list,int c)
{
    if(list!=NULL)
    {
        c++;
        list=list->next;
        count(list,c);
    }
    else
        return c-1;
}

void empty(Node *list)
{
    if(count(list,0)!=0)
        printf("The list is not empty\n"); 
    else
        printf("The list is empty\n");
}

struct Node* insertatfirst(struct Node *head, int data)
{
    struct Node *ptr =(struct Node *)malloc(sizeof(struct Node)); 
    ptr->data=data;
    ptr->next=head;
    return ptr;
} 

struct Node * insertatindex(struct Node *head, int data, int index)
{
    struct Node *ptr =(struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head; 
    int i=0;
    while(i!=index-1)
    {
        p = p->next;
        i++;

    } 
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
} 

struct Node* insertatend(struct Node *head, int data)
{
    struct Node *ptr =(struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while(p->next!=NULL)
    {
        p = p->next;
    } 
    ptr->data=data;
    p->next = ptr;
    ptr->next = NULL;

    return head;
} 

struct Node *deletefirst(struct Node* head)
{
    struct Node *ptr = head; 
    head = head->next; 
    free(ptr);
    return head;
} 
struct Node* deleteatindex(struct Node* head, int index)
{
    struct Node* p = head;
    struct Node* q = head->next;     
    for(int i=0; i<index-1; i++)
    {
         p=p->next;
         q=q->next;
    } 
    p->next = q->next; 
    free(q); 
    return head;
} 
struct Node* deletelastNode(struct Node* head)
{
    struct Node* p = head;
    struct Node *q = head->next;
    while(q->next !=NULL) 
    {
        p= p->next;
        q= q->next;
    } 
    p->next = NULL; 
    free(q); 
    return head;
} 
struct Node* deleteatvalue(struct Node* head, int value)
{
    struct Node* p = head;
    struct Node* q = head->next; 
    while(q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next; 
    }
    if(q->data == value)
    {
        p->next = q->next; 
        free(q);
    } 
    return head;
}

void search(Node *list,int val)
{
    int c=0;
    while(list->next!=NULL)
    {
        if(list->data==val)
            c++;
            list=list->next;
    }

    if(c>0)
        printf("The element entered is found in the list\n");
    else   
        printf("The element entered is not found in the list\n");
}
int ll()
{
    Node *head= (Node *)malloc(sizeof(Node));
    printf("Enter the values of linked list\n");
    printf("Enter -999 to stop\n");
    create(head);
    printf("\n"); 
    print(head); 
    printf("\n"); 
    int n;
    printf(" 1. traversal \n 2. check if list is empty \n 3. insert a Node at beginning \n 4. insert a Node at an index \n 5. insert a Node at end \n 6. delete a Node at beginning \n 7. delete a Node at any index \n 8. delete a Node at end \n 9. delete a Node for a given key \n 10. count the number of Nodes \n 11. search for an element\n"); 
    int m;
    printf("Enter 0 to use the menu");
    scanf("%d",&m); 
     
    while(m==0)
    {   
        printf("Enter your Choice\n");
        scanf("%d",&n); 
        switch(n)
        {   
            case 1: traversal(head); 
                    printf("\nEnter 0 to use the menu ");
                    scanf("%d",&m); 
                    break;
            case 2: printf("\n"); 
                    printf("The number of Nodes is the list %d \n",count(head,0));
                    printf("\nEnter 0 to use the menu ");
                    scanf("%d",&m);
                    break;
            case 3: head= insertatfirst(head,56); 
                    printf("\nNew linked list:\n");
                    print(head); 
                    printf("\nEnter 0 to use the menu ");
                    scanf("%d",&m);
                    break;
            case 4: head = insertatindex(head,56,3);
                    printf("\nNew linked list:\n");
                    print(head); 
                    printf("\nEnter 0 to use the menu ");
                    scanf("%d",&m);
                    break; 
            case 5: head = insertatend(head,56);
                    printf("\nNew linked list:\n");
                    print(head); 
                    printf("\nEnter 0 to use the menu ");
                    scanf("%d",&m);
                    break; 
            case 6: head= deletefirst(head);
                    printf("\nNew linked list:\n");
                    print(head);
                    printf("\nEnter 0 to use the menu ");
                    scanf("%d",&m);
                    break;
            case 7: int m;
                    printf("\nEnter the index at which you want to delete the Node:\n");
                    scanf("%d",&m);
                    head = deleteatindex(head,m); 
                    printf("\nNew linked list:\n");
                    print(head); 
                    printf("\nEnter 0 to use the menu ");
                    scanf("%d",&m);
                    break;
            case 8: head = deletelastNode(head);
                    printf("\nNew linked list:\n");
                    print(head); 
                    printf("Enter 0 to use the menu ");
                    scanf("%d",&m);
                    break;
            case 9: int p;
                    printf("\nEnter the data at whose Node you want to delete:\n");
                    scanf("%d",&p); 
                    deleteatvalue(head,p); 
                    printf("New linked list:\n");
                    print(head); 
                    printf("\nEnter 0 to use the menu ");
                    scanf("%d",&m);
                    break;
            case 10: printf("\n");
                     printf("The number of Nodes in the linked list is %d \n",count(head,0));
                     printf("\nEnter 0 to use the menu ");
                     scanf("%d",&m); 
                     break;
            case 11: printf("\n"); 
                     printf("\nEnter the element to be searched:\n");
                     int r;
                     scanf("%d",&r);
                     search(head,r); 
                     printf("\nEnter 0 to use the menu ");
                     scanf("%d",&m); 
                     break;
            default:
                     printf("Invalid Choice\n"); 
                     printf("\nEnter 0 to use the menu ");
                     scanf("%d",&m); 

        } 
    } 
    printf("You have exited the menu\n");
}