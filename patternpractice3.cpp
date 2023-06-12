/*
12344321
123**321
12****21
1******1   */
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int i=1;
    while(i<=N)
    {
        int j=1;
        while(j<=(N-i+1))
        {
           cout<<j;
           j++;
        }
        j=i-1;
        while(j>=1)
        {
            cout<<"**";
            j--;
        }
        /*j=i-1;
        while(j>=1)
        {
            cout<<'*';
            j--;
        } */
        int k=N;
        j=1;
        while(j<=(N-i+1))
        {
            cout<<k-i+1;
            k--;
            j++;
        }
        cout<<endl;
        i++;
    }
}