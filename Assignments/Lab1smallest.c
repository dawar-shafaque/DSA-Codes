//WAP to find out the kth smallest and kth largest element stored in a dynamic array of n integers, where k<n.
// #include <stdio.h>
int smallest()
{
    int n,i,j,temp,k=0,temp1,temp2;
    printf("Enter the size of an array :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values in the Array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The elements in an Array : ");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
    //Sorting the array
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {   
             temp=0;
            if(a[i]>a[j])
            {
               int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Array after sorting :");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n"); 
    printf("Enter a value to find the smallest and largest :");
    scanf("%d",&k); 
    if(k<n)
    {
        printf("kth smallest element is:%d\n",a[k-1]);
        printf("kth largest element is:%d\n",a[n-k]);
    }
        
}
    
