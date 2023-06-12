/* WAP to calculate number of vowels and consonants in a string using pointer */
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char *p=&s[0];
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
        {
            count++;
        }
        p++;
    }
   
    cout<<"No. of vowels ="<<count<<endl;
    cout<<"No. of consonants ="<<s.length()-count<<endl;

}