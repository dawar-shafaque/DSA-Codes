#include <stdio.h>
int main() {
   int b, i, r, a[50];
 
   printf("Enter the number of elements in the array: ");
   scanf("%d", &b);
 
   printf("Enter the array elements: ");
   for (i = 0; i < b; i++)
    {
      scanf("%d", &a[i]);
    }
 
   printf("Enter the element to be searched: ");
   scanf("%d", &r);
   i = 0;
   while (i<b && r != a[i]) 
   {
      i++;
   }
 
   if (i < b) {
      printf("The element is found in the position = %d", i + 1);
   } else {
      printf("Element not found!");
   }
 
   return 0;
}