/* Given a string s, your task is to remove the repeating consecutive characters.
Approach: Create an answer string and iterate in the string from i=1 and check if it
is equal to the previous character. Two cases arise

1. s[i] = s[i-1] - then do not push_back the ith character to the answer string.
2. s[i] != s[i-1] - then push_back the ith character to the answer string. */

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    char answer[1000];
    cout<<"Enter the string :"<<endl;
    cin>>s;
    answer[0]=s[0];
    int j=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]!=s[i-1])
        {
            answer[j]=s[i];
            j++;
        }
    }
    answer[j]='\0';
    cout<<answer<<endl;
    return 0;
    
}