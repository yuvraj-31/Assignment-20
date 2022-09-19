/******************************************************************************

    Write a function to swap strings of two char arrays of calling functions.

*******************************************************************************/

#include <stdio.h>
void swap(char *p, char *q);
int main()
{
   char s1[50];
   printf("Enter the string 1st\n");
   fgets(s1,50,stdin);
   char s2[50];
   printf("Enter the string 2ndt\n");
   fgets(s2,50,stdin);
   swap(s1,s2);
   printf("\n%s",s1);
   printf("%s",s2);

    return 0;
}
void swap(char *p, char *q)
{
    int i;
    char s[50];
    for(i=0;(*(p+i) || *(q+i));i++)
    {   
        
        s[i] = *(p+i);
        *(p+i) = *(q+i);
        *(q+i) = s[i];
    }
}
