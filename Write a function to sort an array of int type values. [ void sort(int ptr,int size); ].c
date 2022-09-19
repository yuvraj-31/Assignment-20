/******************************************************************************
Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

*******************************************************************************/

#include <stdio.h>
void sort(int *p, int n);
int main()
{   
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
   printf("Enter the %d elements of array\n",n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   
   sort(a,n);
   printf("After sorted the elements\n");
   for(int i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }

    return 0;
}
void sort(int *p, int n)
{   
    int i,j;
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
     {
         if(*(p+i)>*(p+j))
         {
             int temp=*(p+i);
             *(p+i)=*(p+j);
             *(p+j)=temp;
         }
     }
    }
}
