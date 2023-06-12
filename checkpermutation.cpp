/*Check Permutation
For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
Permutations of each other
Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so 
that it becomes identical to the other one.

Example: 
str1= "sinrtg" 
str2 = "string"
The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings 
are a permutation of each other.

Input Format:
The first line of input contains a string without any leading and trailing spaces, representing the first string 
'str1'.
The second line of input contains a string without any leading and trailing spaces, representing the second string 
'str2'.

Note:
All the characters in the input strings would be in lower case.

Output Format:
The only line of output prints either 'true' or 'false', denoting whether the two strings are a permutation of each 
other or not.
You are not required to print anything. It has already been taken care of. Just implement the function. */
#include <iostream>
#include<cstring>
using namespace std;
bool isPermutation(char str1[], char str2[]) 
{
    if(strlen(str1)!=strlen(str2))
    {
        return false;
    }

    int freq[256]={0};
    for(int i=0;str1[i]!='\0';i++)
    {
        freq[str1[i]]++;
    }
    for(int i=0;str2[i]!='\0';i++)
    {
        freq[str2[i]]--;
    }

    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0)
            return false;
    }
    return true;
}
/*
bool isPermutation(char str1[], char str2[]) 
{
    if(strlen(str1)!=strlen(str2))
    {
        return false;
    }
    int n=strlen(str1);

    bool flag=false;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(str1[i]==str2[j] && str2[j]!='@')
            {
                flag=true;
                str2[j]='@';
                break;
            }
            if(j==n-1)
            {
                return false;
            }
        }
    }
    return flag;
} */
int main()
{
    char str1[1000];
    char str2[1000];
    cout<<"Enter first string"<<endl;
    cin>>str1;
    cout<<"Enter second string"<<endl;
    cin>>str2;
    cout<<isPermutation(str1,str2); 
}