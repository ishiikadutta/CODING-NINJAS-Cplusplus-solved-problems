/*
ABCDE
ABCD
ABC
AB
A */
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>> N;
    int i=N;
    while(i>=1)
    {
        int j=1;
        char c= 'A';
         while(j<=i)
        {
           
            cout<<c;
            c++;
            j++;
        }
        cout<<endl;
        i--;
    }
}