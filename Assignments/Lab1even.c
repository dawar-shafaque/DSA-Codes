//#include <stdio.h>
int even()
{
    int n,temp;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n][n],i,j,k; 
   printf("enter the values");
   for(i=0;i<n;i++)
   {   
       for(j=0;j<n;j++) 
       {
       scanf("%d",&a[i][j]);
       } 
       printf("\n");
   }
    for(i=0;i<n;i++)
   {   
       for(j=0;j<n;j++) 
       {
       printf("%d",a[i][j]); 
       } 
       printf("\n");
   } 
   for(i=0;i<n;i++) 
   {    
        if(n%2==0)
        {
            k=0;
            for(j=0;j<n/2;j++)
            {
                int temp=a[i][j+n-1-2*k]; 
                    a[i][j+n-1-2*k]=a[i][j]; 
                    a[i][j]=temp; 
                    k++;
            } 
        } 
        else if(n%2!=0)
        {
            k=0;
            for(j=0;j<((n-1)/2);j++)
            {
                int temp=a[i][j+n-1-2*k]; 
                    a[i][j+n-1-2*k]=a[i][j]; 
                    a[i][j]=temp; 
                    k++;
            } 
        }
   }
    
    printf("New array\n");
    for(i=0;i<n;i++)
    {   
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        } 
        printf("\n");
    }
} 