//wap to print all permutations of a given string using pointer
//#include<stdio.h>
int permutation()
{
    char *str="abc";
    char *p=str;
    char *q=str;
    int i,j,k,l,m,n;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                for(l=0;l<3;l++)
                {
                    for(m=0;m<3;m++)
                    {
                        for(n=0;n<3;n++)
                        {
                            if(i!=j && i!=k && i!=l && i!=m && i!=n && j!=k && j!=l && j!=m && j!=n && k!=l && k!=m && k!=n && l!=m && l!=n && m!=n)
                            {
                                printf("%c%c%c%c%c%c",*(p+i),*(p+j),*(p+k),*(p+l),*(p+m),*(p+n));
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}