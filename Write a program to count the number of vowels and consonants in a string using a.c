/******************************************************************************

Write a program to count the number of vowels and consonants in a string using a
pointer.

*******************************************************************************/

#include <stdio.h>
void count(char *p);
int main()
{
    char s[50];
    printf("Enter a string\n");
    fgets(s,50,stdin);
    count(s);

    return 0;
}

void count(char *p)
{
    int i,count1=0,count2=-1;
    for(i=0;*(p+i);i++)
    {
        if(*(p+i)=='a' || *(p+i)=='A' || *(p+i)=='e' || *(p+i)=='E' || *(p+i)=='i' || *(p+i)=='I' || *(p+i)=='o' || *(p+i)=='O' || *(p+i)=='u' || *(p+i)=='U' )
          count1++;
        else 
        count2++;
   }
   printf("number of vowels: %d\n",count1);
   printf("number of consonants: %d",count2);
}
