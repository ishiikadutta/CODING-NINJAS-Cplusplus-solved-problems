/*Given a string s of latin characters, your task is to output the character which has
maximum frequency */
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    string s;
    int freq[26];//a-z we have 26 characters
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }
    cout<<"Enter the string :"<<endl;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        freq[s[i]-'a']++;
    }
    int max=freq[0];
    char maxch='a';
    for(int i=0;i<26;i++)
    {
        if(max<freq[i])
        {
            max=freq[i];
            maxch=i+'a';
        }
    }
    cout<<"The character which has maximum frequency is :"<<endl;
    cout<<maxch<<endl;
    cout<<"The max freq is :"<<endl;
    cout<<max<<endl;
    return 0;

}