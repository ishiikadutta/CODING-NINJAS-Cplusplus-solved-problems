/*Reverse Each Word
Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a 
function so as to print the sentence such that each word in the sentence is reversed.
Example:
Input Sentence: "Hello, I am Aadil!"
The expected output will print, ",olleH I ma !lidaA".

Input Format:
The first and only line of input contains a string without any leading and trailing spaces. The input string 
represents the sentence given to Aadil.

Output Format:
The only line of output prints the sentence(string) such that each word in the sentence is reversed.  */
#include <iostream>
#include<cstring>
using namespace std;
void reverse(char input[], int start, int end)
{
    while(start<end)
    {
        int temp=input[start];
        input[start]=input[end];
        input[end]=temp;
        start++;
        end--;
    }
}
void reverseEachWord(char input[])
{
    int n=strlen(input);
    int start=0,end;
    for(int i=0;i<=n;i++)
    {
        if(input[i]==' ' || input[i]=='\0')
        {
            end=i-1;
            reverse(input,start,end);
            start=i+1;
        }
    }
    
}

int main()
{
    char str[1000];
    cout<<"Enter first string"<<endl;
    cin.getline(str,1000);
    reverseEachWord(str);
    cout<<str;
    
}
