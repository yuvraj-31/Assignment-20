/******************************************************************************
 Write a function to swap values of two in variables of calling function. (TSRS)

*******************************************************************************/

#include <stdio.h>
void swap(int *p, int *q);
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);

    return 0;
}
void swap(int *p, int *q)
{
    int temp= *p;
    *p=*q;
    *q=temp;
}
