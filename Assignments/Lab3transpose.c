//WAP to find the transpose of a matrix
// #include <stdio.h>
// #include <stdlib.h>
int transpose()
{
int m,n,i,j;
printf("Enter the order of the matrix: ");
scanf("%d %d",&m,&n);
int *p,b[m][n];
p=(int*)malloc((m*n)*sizeof(int));
printf("Enter the elements of the array: ");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++) 
    {
        scanf("%d",(p+i*n+j));
    }
}
printf("The matrix is: \n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",*(p+i*n+j));
    }
    printf("\n");
}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        b[j][i]=*(p+i*n+j);
    }
}
printf("The transpose of the matrix is: \n");
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}
return 0;
}