/*
C program to read a one dimensional array, print sum of all elements along with
inputed array elements using Dynamic Memory Allocation.
*/

// #include <stdio.h>
// #include <stdlib.h>

void dma()
{
    int n;
    printf("Enter the length of array \n");
    scanf("%d",&n);  

    int *arr=(int *) malloc(n * sizeof(int));
    int sum=0;
    printf("Enter the elements of the array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    printf("The elements in the array are \n");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }

    printf("The sum of the elements of the array is %d. \n",sum);

}