/******************************************************************************

Write a program in C to demonstrate how to handle the pointers in the program.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int x;                                  //declaring an integer variable
   printf("Address of variable x\n %p\n",&x);        //printing the address of variable x
   
   int *p;
   p=&x;
   printf("Enter a value\n");
   scanf("%d",p);
   
   printf("Address of pointer variable\n %p\n",&p);
   printf("value stored in pointer variable\n %p\n",p);
   
   printf("value stored at address pointed by the pointer variable\n %d\n",*p);
                          
  

    return 0;
}
 

