/*
Print the following pattern:
    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1                      */
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int i=1;
    while(i<=(N+1)/2)
    {
        int k=N/2-i+1;
        while(k>0)
        {
            cout<<" ";
            k--;
        }
        int j=1;
        while(j<=(2*i-1))
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    i=1;
    while(i<=N/2)
    {
        int k=1;
        while(k<=i)
        {
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=(2*((N/2)-i+1))-1)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}