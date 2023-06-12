/*Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with 
character c2 in the given string.

Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)

Output Format :
Updated string */

#include<iostream>
#include<string.h>
using namespace std;
void replaceCharacter(char input[], char c1, char c2) 
{
    int n = strlen(input);

    for(int i=0;i<n;i++)
    {
        if(input[i]==c1)
        {
            input[i]=c2;
        }
    }

}

int main()
{
    char S[1000];
    char c1,c2;
    cout<<"Enthmr the string"<<endl;
    cin>>S;
      cout<<"Enter the c1"<<endl;
    cin>>c1;
      cout<<"Enter the c2"<<endl;
    cin>>c2;
    replaceCharacter(S,c1,c2);
    cout<<S;

}
