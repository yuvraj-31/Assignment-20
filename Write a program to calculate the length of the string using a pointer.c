/******************************************************************************

Write a program to calculate the length of the string using a pointer

*******************************************************************************/

#include <stdio.h>
void len(char *p);
int main()
{
    char s[50];
    printf("Enter a string\n");
    fgets(s,50,stdin);
    len(s);

    return 0;
}

void len(char *p)
{
    int i;
    for(i=0;*(p+i);i++);
    printf("length of the string is %d",i-1);
       
}
