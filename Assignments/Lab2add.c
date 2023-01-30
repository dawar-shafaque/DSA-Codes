//WAP using function that adds given two polynomials f(x) = h(x) + g(x)

// #include <stdio.h>
// #include <stdlib.h>

void l2q1input453(int *p,int o)
{
    for(int i=0;i<=o;i++)
    {
        scanf("%d",&p[i]);
    }

}

void l2q1calculate453(int *p,int *q,int *r,int a,int b,int n)
{
    int i,j=0,k=0;
    for(i=0;i<=n;i++)
    {
        if((a-j)==(b-k) && (a-j)==(n-i) )
        {
            r[i]=p[j]+q[k];
            j++;
            k++;
        }
        else if((a-j)==(n-i) && (a-j)!=(b-k))
        {
            r[i]=p[j];
            j++;
        }
        else if((b-k)==(n-i) && (a-j)!=(b-k))
        {
            r[i]=q[k];
            k++;
        }
        
    }
}

void l2q1display453(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        
        printf("%d*x^(%d) + ",p[i],(n-i));
    }
    printf("%d.  \n",p[n]);
}

void add453()
{
    int *p1,*p2,n1,n2;
    printf("Enter the order of the first polynomial: ");
    scanf("%d",&n1);

    printf("Enter the order of the second polynomial: ");
    scanf("%d",&n2);

    p1=(int *) malloc((n1+1) * sizeof(int));
    p2=(int *) malloc((n2+1) * sizeof(int));

    printf("Enter the coefficients of the first polynomial \n");
    l2q1input453(p1,n1);

    printf("Enter the coefficients of the second polynomial \n");
    l2q1input453(p2,n2);

    int m;

    if(n1>n2)
        m=n1;
    else 
        m=n2;

    int *p3;
    p3 = (int *) malloc(m * sizeof(int));
    l2q1calculate453(p1,p2,p3,n1,n2,m);

    printf("The first polynomial is \n");
    l2q1display453(p1,n1);
    printf("The second polynomial is \n");
    l2q1display453(p2,n2);
    printf("The final polynomial is \n");
    l2q1display453(p3,m);

}
