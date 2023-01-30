//WAP to find determinant of 3×3 Matrix using dynamic memory allocation
// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
int det()
{   
    int i,j,det;
    int **p=(int **)calloc((3*3),sizeof(int *)); 
    printf("Enter the elements of the matrix\n");
    for(i=0;i<3;i++)
    {   
        for(j=0;j<3;j++)
        {
            scanf("%d",i,&p[i][j]);
        }
    } 
   /* int *q=(int *)malloc((3*3)*sizeof(int));
    for(j=0;j<3;j++)
    {
        
            scanf("%d",i,&q[j]);
        
    }*/ 
       //for(i=0;i<3;i++)
      //det = det + (p[0][i]*(p[1][(i+1)%3]*p[2][(i+2)%3] - p[1][(i+2)%3]*p[2][(i+1)%3]));

       det=p[0][0]*(p[1][1]*p[2][2]-p[1][2]*p[2][1])-p[0][1]*(p[1][0]*p[2][2]-p[1][2]*p[2][0])+p[0][2]*(p[1][0]*p[2][1]-p[1][1]*p[2][0]);
    printf("Determinant of the matrix is %d",det); 
}