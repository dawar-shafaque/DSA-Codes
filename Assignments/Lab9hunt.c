/*Given an array container[] and intefer hunt. WAP to find whether hunt is present 
    in container[] or not . If present then triple the calue of hunt and search again.
    Repeat the steps untill hunt is not found. Finally return the value of hunt*/
// #include <stdio.h>
// #include <stdlib.h>

int main_hunt()
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
    int hunt; 
    printf("Enter the number you want to hunt \n");
    scanf("%d",&hunt);
    int i=0;
    while(i<n)
    {
        if(a[i]==hunt)
        {
            hunt=hunt*3;
            i=0;
        }
        else
            i++;
    }
    
        printf("Hunt is:  %d  ",hunt);
        return 0;
}