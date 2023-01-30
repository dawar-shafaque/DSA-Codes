//You are given an array of 0s and 1s in random order.Segregate 0s on left side and 1s on right side of the array. 
//Traverse array only once.


// #include <stdio.h>

void array()
{
    int n;
    printf("Enter the length of the array \n");
    scanf("%d",&n);
    int a[n];


    printf("Enter the elements of array a \n");

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);




       for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (a[j]==0 && a[i]!=0)
                {
                int temp = a[j];
                 a[j] = a[i];
                a[i] = temp;
                break;
                }
            }


        }

    printf("The sorted array is \n");

    for( int i=0;i<n;i++)
        printf("%d ",a[i]);

}