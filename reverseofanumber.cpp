/*Write a program to generate the reverse of a given number N. 
Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. 
For e.g., reverse of 10400 will be 401 instead of 00401. */
#include<iostream>
using namespace std;
int main()
{
    int N,a,rev=0;
    cin>>N;

    while(N!=0)
    {
        a=N%10;
        rev=rev*10+a;
        N=N/10;
    }
    cout<<rev<<endl;
}
