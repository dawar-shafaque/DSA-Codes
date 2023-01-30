
//#include <stdio.h>

void largest()
{
    int n,count=0,l;
    printf("Enter the value of n \n");
    scanf("%d",&n);

    int a[30],i,j;

    printf("Enter the elements of array \n");
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    printf("\n");
    printf("The array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    } 
    printf("\n");
    l=a[0];
    for (int i = 0; i < n; i++)
        {   
            
            if(a[i]>l)
            {
                l=a[i]; 
            } 
            for(j=0;j<n;j++)
            {
                if(a[j]==l&&i==n-1)
                {
                    count++;
                }
            }
   
        }

    printf("The largest element is %d and it occurs %d times \n",l,count);
    
}