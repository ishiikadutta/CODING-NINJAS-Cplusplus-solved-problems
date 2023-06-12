/*Given a string s with both uppercase and lowercase latin characters (‘a’ - ‘z’). Your
task is convert whole string into
1. Lower Case
2. Upper Case */
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string :: iterator it=s.begin()+2;
    it++;
    transform(it,s.end(),it,::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    
}