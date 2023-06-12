/*Given a string s with both uppercase and lowercase latin characters (‘a’ - ‘z’). Your
task is convert whole string into
1. Lower Case
2. Upper Case */
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the desired string :"<<endl;
    cin>>s;
    cout<<"Enter your choice :"<<endl;
    cout<<"1. Lower Case"<<endl;
    cout<<"2. Upper Case"<<endl;

    int x;
    cin>>x;
    switch(x)
    {
        case 1:
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
        }
        cout<<s<<endl;
        break;

        case 2:
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]-32;
            }
        }
        cout<<s<<endl;
        break;


        default:
        cout<<"Invalid choice"<<endl;

    }
    return 0;
    
}