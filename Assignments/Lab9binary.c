//wap to read an array of integers and search for an element using binary search
 #include <stdio.h>
 #include <stdlib.h>


void Sort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
int search(int *arr,int key,int low,int high)
{
    if(low>high)
        return 0;
    else
    {
        int mid=(low+high)/2;
        if(key=arr[mid])
            return 1;
        else if(key>arr[mid])
            return search(arr,key,mid+1,high);
        else  
            return search(arr,key,low,mid-1);
    }
    
}
int main()
{
    int n;
    printf("Enter the size of the array:    ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    printf("Enter the elements of the array:    \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int find; int count=0;
   Sort(a,n);
    printf("Enter the element you want to search: \n");
    int key;
    scanf("%d",&n);
    if(search(a,key,0,n-1)==1)
        printf("The element is found in the array");
    else    
        printf("The element is not found in the array");
    
    return 0;
}