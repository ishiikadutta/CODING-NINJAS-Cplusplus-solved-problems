/*Write a program to count and print the total number of characters (lowercase english alphabets only),
 digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are entered 
till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space). */
#include<iostream>
using namespace std;
int main()
{
     char ch;
     
     int p,q,r;
     p=0;
     q=0;
     r=0;
     ch=cin.get();
     while(ch!='$')
     { 
         
         if(ch>='a' && ch<='z')
         {
             p++;
         } 
         if(ch>='0' && ch<='9')
         {
             q++;
         }
         if(ch==' '|| ch=='\n'||ch=='\t')
         {
             r++;
         }
         ch=cin.get();
     }
     cout<<p<<" "<<q<<" "<<r;
     return 0;
}