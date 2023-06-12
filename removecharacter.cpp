/*Remove character
For a given a string(str) and a character X, write a function to remove all the occurrences of X from the given 
string.
The input string will remain unchanged if the given character(X) doesn't exist in the input string.

Input Format:
The first line of input contains a string without any leading and trailing spaces.
The second line of input contains a character(X) without any leading and trailing spaces.

Output Format:
The only line of output prints the updated string. 

Note:
You are not required to print anything explicitly. It has already been taken care of.*/
#include <iostream>
using namespace std;
void removeAllOccurrencesOfChar(char input[], char x) 
{
    int j=0;
    for(int i=0;input[i]!='\0';i++)
    {   
        if(input[i]!=x)
        {
            input[j]=input[i];
            j++;
        }
    }
    input[j]='\0';
}
int main()
{
    char str[100];
    char x;
    cout<<"Enter the string"<<endl;
    cin>>str;
    cout<<"Enter the character to remove"<<endl;
    cin>>x;
    removeAllOccurrencesOfChar(str,x);
     cout<<str;
   
}