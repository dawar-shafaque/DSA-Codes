#include<stdio.h>

int main(){
    int a,b;
    int n;
    printf("Size of array : ");
    scanf("%d",&n);
    int d[n];
    int i;
    printf("Enter the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&d[i]);
    }
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (d[j] < d[i])
            {
                int temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }
    printf("Sorted array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ",d[i]);
    }
    printf("\n");
    printf("Number between %d and %d are : ",a,b);
    for (i = 0; i < n; i++)
    {
        if (d[i] > a && d[i] < b )
        {
            printf("%d ",d[i]);
        } 

    }

}