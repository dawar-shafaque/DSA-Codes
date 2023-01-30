//WAP to check whether the given matrix is sparse matrix or not

// #include <stdio.h>
// #include <stdlib.h>

void l2q7input453(int *ptr,int n)
{
    for(int i=0;i<(n*n);i++)
    {
        scanf("%d",&ptr[i]);                                            
    }                 
}

void l2q7output453(int *ptr,int n)
{
    for(int i=0;i<(n*n);i++)
    {
       printf("%d\t",ptr[i]);
       if((i+1)%n==0)
        printf("\n");
    }

}

void l2q7sparse453(int *ptr,int n)
{
    int ctr=0;
    for(int i=0;i<(n*n);i++)
    {
            if(ptr[i]==0)
                ctr ++;
    }

    if(ctr>((n*n)/2))
        printf("\n The matrix is a sparse matrix");
    else
        printf("The matrix is not a sparse matrix");
}


void matrix()
{
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);

    int *p;
    p=(int *) malloc((n*n) * sizeof(int));
    printf("Enter the elements of the matrix \n");
    l2q7input453(p,n);

    printf("The matrix is \n ");
    l2q7output453(p,n);

    l2q7sparse453(p,n);
}