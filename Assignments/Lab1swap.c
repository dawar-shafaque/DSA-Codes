/*
WAP to swap all the elements in the 1st column with all the corresponding
elements in the last column, and 2nd column with the second last column
and 3rd with 3rd last etc. of a 2-D array. Display the matrix
*/

//#include <stdio.h>

void swap()
{
    int r,c;

    printf("Enter the number of rows in an array \n");
    scanf("%d",&r);

    printf("Enter the number of columns in an array \n");
    scanf("%d",&c);

    int arr[r][c];

    printf("Enter the elements in the array \n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&arr[i][j]);

    printf("The original array is \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d",arr[i][j]);
        printf("\n");
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c/2;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][c-j-1];
            arr[i][c-j-1]=temp;
        }
    }

    printf("The new array is \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d",arr[i][j]);
        printf("\n");
    }

}