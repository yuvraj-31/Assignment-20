/******************************************************************************

Write a program to find the maximum number between two numbers using a pointer

*******************************************************************************/

#include <stdio.h>
void max(int *x, int *y);
int main()
{
    int a,b;
    printf("Enter the two numbers\n");
    scanf("%d %d",&a,&b);
    max(&a,&b);

    return 0;
}

void max(int *x, int *y)
{
    *x>*y?printf("%d is the maximum",*x):printf("%d is the maximum",*y);
}
