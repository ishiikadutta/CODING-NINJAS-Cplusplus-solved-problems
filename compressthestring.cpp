/*Compress the String
Write a program to do basic string compression. For a character which is consecutively repeated more than once, 
replace consecutive duplicate occurrences with the count of repetitions.

Example:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".
The string is compressed only when the repeated character count is more than 1.

Note:
Consecutive count of every character in the input string is less than or equal to 9.

Input Format:
The first and only line of input contains a string without any leading and trailing spaces.

Output Format:
The output contains the string after compression printed in single line.

Note:
You are not required to print anything. It has already been taken care of. Just implement the given function.*/
#include <iostream>
#include<cstring>
using namespace std;
void getCompressedString(char str[]) 
{
    int c=0,count=0,x=str[0];//x=lastchar
    int n=strlen(str);
   for(int i=0;i<=n;i++)
   {
       if(str[i]==x)
       {
           count++;
       }

        else if(str[i]!=x && count==1)
       {
           x=str[i];
           c++;
           str[c]=str[i];
       }
       
       else if(str[i]!=x && count>1)
       {
           str[c+1]=48+count;
           x=str[i];
           str[c+2]=str[i];
           count=1;
           c=c+2;
       }

   }
    
}

int main()
{
    char str[1000];
    cout << "Enter the string" << endl;
    cin>>str;
    getCompressedString(str);
    cout<<str;
    
}