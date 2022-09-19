/******************************************************************************

Write a program to print a string in reverse using a pointer

*******************************************************************************/

#include <stdio.h>
void rev(char *p,int n);
int main()
{
  
   char s[50];
   printf("Enter a string\n");
   fgets(s,50,stdin);
   int i;
   for( i=0;s[i];i++);
  
   rev(s,i-1);
   printf("string in reverse order\n%s",s);

    return 0;
}

void rev(char *p,int n)
{
    int i,j;
    char temp;
    for(i=0;i<n/2;i++)
    {  
        j=n-1-i;
       temp=*(p+i);
       *(p+i)=*(p+j);
       *(p+j)=temp;
       
    }
   
}
