/*Given an input string S that contains multiple words, you need to remove all the spaces present in the input 
string.
There can be multiple spaces present after any word.

Input Format :
 String S

Output Format :
Updated string */
#include <iostream>
#include<string.h>
using namespace std;

void trimSpaces(char input[]) 
{
    int n=strlen(input);
    for(int i=0;i<=n;i++)
    {
        if(input[i]==' ')
        {
            int j=i;
            while(j<n)
            {
                input[j]=input[j+1];
                j++;
            }
            input[j]='\0';
        }
    }

}

int main()
{
    char S[1000];
    cout<<"Enter the string"<<endl;
    cin.getline(S,1000);
    trimSpaces(S);
    cout<<S;

}
/*void trimSpaces(char input[]) 
{
    int i = 0, j = 0;
    while (input[i])  //input[i]!='\0'
    {
        if (input[i] != ' ')
        {
           input[j] = input[i];
           j++;
        }
        i++;
    
    }
    input[j] = '\0';
    
} */