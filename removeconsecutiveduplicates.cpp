/*Remove Consecutive Duplicates
For a given string(str), remove all the consecutive duplicate characters.
Example:
Input String: "aaaa"
Expected Output: "a"
Input String: "aabbbcc"
Expected Output: "abc"

Input Format:
The first and only line of input contains a string without any leading and trailing spaces. All the characters in 
the string would be in lower case.

Output Format:
The only line of output prints the updated string.

Note:
You are not required to print anything. It has already been taken care of. */
#include <iostream>
using namespace std;
void removeConsecutiveDuplicates(char str[])
{
    int c=str[0],j=1;//last charcter=c
    for(int i=1;str[i]!='\0';i++)
    {
       if(str[i]!=c)
       {
           str[j]=str[i];
           c=str[i];
           j++;
       }
    }
    str[j]='\0';
}
int main()
{
    char str[1000];
    cout<<"Enter the string"<<endl;
    cin>>str;
    removeConsecutiveDuplicates(str);
    cout<<str;
}