/*Minimum Length Word
Given a string S (that can contain multiple words), you need to find the word which has minimum length.
Note : If multiple words are of same length, then answer will be first minimum length word in the string.
Words are seperated by single space only.
Input Format :
String S
Output Format :
Minimum length word */
#include <iostream>
using namespace std;
#include<cstring>
#include<climits>
void minLengthWord(char input[], char output[])
{
    int n=strlen(input);
    int min=INT_MAX;
    int count=0;
    int start=0,end,temp;
    for(int i=0;i<=n;i++)
    {
        if(input[i]==' ' || input[i]=='\0')
        {
            if(count<min)
            {
                min=count;
                temp=start;
                end=i-1;
                
            }
            start=i+1;
            count=0;
            continue;
        }
        count++;
    }
    
    int j=0;
    for(j=0;j<=end-temp;j++)
    {
        output[j]=input[temp+j];
    }
    output[j]='\0';

}

int main()
{
    char input[100],output[100];
    cin.getline(input,100);
    minLengthWord(input,output);
    cout <<output<< endl;

}

