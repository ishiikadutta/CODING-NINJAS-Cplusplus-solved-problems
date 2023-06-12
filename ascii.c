#include<stdio.h>
int main()
{ 
     char ch=1;
     int i=1;
     while(i<=256)
     {   ch=i;
         printf("%d = %c\n",i,ch);
         i++;
     }
}