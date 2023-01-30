#include <stdio.h>
int main()
{
    int a[20],n,i; 
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the Array:");
 
for(i=0;i<n;i++)
scanf("%d",&a[i]);
    int temp;
    for(int i = 0; i<n/2; i++)
    {
        temp = a[i]; 
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    } 
     printf("Reverse array:\n"); 
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}