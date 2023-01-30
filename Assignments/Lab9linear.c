//WAP to read an array of integers and search for an element using linear search
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the array:    ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    printf("Enter the elements of the array:    \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int find; int count=0;
    printf("Enter the number you want to search for in the array \n");
    scanf("%d",&find);
    for(int i=0;i<n;i++)
    {
        if(a[i]==find)
            count++;
    }
    if(count!=0)
        printf("The element is present in the array.");
    else
        printf("The element is not present in the array");
    return 0;
}