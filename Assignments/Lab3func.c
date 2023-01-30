//WAP using function that adds given two polynomials f(x) = h(x) + g(x)
// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h> 
void l3q3add453(int *p, int *q, int *r, int a, int b, int c)
{   
    int i,j=0,k=0;
    for(int i=0;i<=c;i++)
    {
        if((a-j)==b-k&&(a-j)==(c-i))
        {
            r[i]=p[j]+q[k];
            j++;
            k++;
        } 
        else if((a-j)==(c-i)&&(b-k)!=(a-j))
        {
            r[i]=p[j];
            j++;
        } 
        else if((b-k)==(c-i)&&(a-j)!=(c-i))
        {
            r[i]=q[k];
            k++;
        }
    }
}
void l3q3display453(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        
        printf("%d*x^(%d) + ",p[i],(n-i));
    }
    printf("%d  \n",p[n]);
}
int func()
{
    int m,n,s;
    printf("Enter the order of polynomial 1\n");
    scanf("%d",&m);
    printf("Enter the order of polynomial 2\n");
    scanf("%d",&n);
    int *poly=(int *)malloc((m+1)*sizeof(int));
    int *poly2=(int *)malloc((n+1)*sizeof(int));
    int *poly3=(int *)malloc((s)*sizeof(int));
    for(int i=0;i<m+1;i++)
    {
        scanf("%d",&poly[i]);
    } 
    for(int i=0;i<n+1;i++)
    {
        scanf("%d",&poly2[i]);
    } 
    if(m>n)
        s=m;
    else 
        s=n; 
    l3q3add453(poly,poly2,poly3,m,n,s);
    printf("The first polynomial is: \n");
    l3q3display453(poly,m);
    printf("The second polynomial is: \n");
    l3q3display453(poly2,n);
    printf("After addition:\n");
    l3q3display453(poly3,s);
}
