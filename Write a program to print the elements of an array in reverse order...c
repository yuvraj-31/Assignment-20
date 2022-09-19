/******************************************************************************

Write a program to print the elements of an array in reverse order..

*******************************************************************************/

#include <stdio.h>
void rev(int *p,int n);
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
   rev(a,n);
    for(int i=0;i<n;i++)
   {
       printf("%d",a[i]);
   }

    return 0;
}

void rev(int *p,int n)
{
    int i,j,temp;
    for(i=0;i<n/2;i++)
    {  
        j=n-1-i;
       temp=*(p+i);
       *(p+i)=*(p+j);
       *(p+j)=temp;
       
    }
   
}
