/*Given a string, determine if it is a palindrome, considering only alphanumeric characters.
Palindrome
A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards

Example:
If the input string happens to be, "malayalam" then as we see that this word can be read the same as forward and 
backwards, it is said to be a valid palindrome.
The expected output for this example will print, 'true'.
From that being said, you are required to return a boolean value from the function that has been asked to implement.

Input Format:
The first and only line of input contains a string without any leading and trailing spaces. All the characters in
 the string would be in lower case.

Output Format:
The only line of output prints either 'true' or 'false'.

Note:
You are not required to print anything. It has already been taken care of. */

#include<iostream>
using namespace std;
bool checkPalindrome(char str[]) 
{
    int n=0;
    for(int i=0;str[i]!='\0';i++)
    {
        n++;
    }

    for(int j=0;j<n/2;j++)
    {
        if(str[j]!=str[n-1-j])
        {
            return false;
        }
    }
    return true;

}

int main()
{
    char str[1000];
    cout<<"Enter the palindrome"<<endl;
    cin>>str;
    cout<<checkPalindrome(str)<<endl;

}
