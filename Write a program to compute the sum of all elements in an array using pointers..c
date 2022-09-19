/******************************************************************************

Write a program to compute the sum of all elements in an array using pointers.

*******************************************************************************/

#include <stdio.h>
void sum(int *p,int n);
int main()
{
   int n;
   printf("Enter the size of an array\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter the array elements;\n");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   sum(a,n);

    return 0;
}

void sum(int *p,int n)
{
    int i,count1=0;
    for(i=0;i<n;i++)
    {
       count1=count1 + *(p+i); 
    }
   printf("sum of all elements in an array: %d\n",count1);
   
}
