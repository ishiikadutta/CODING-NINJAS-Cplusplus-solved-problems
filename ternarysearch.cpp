/* Searching an element in a sorted array
Given sorted array of size N and an integer K.Check if K is present in the array or not using ternary search.

Input Format:
The first two lines contains two integers N and K denoting the size of the array and the element to be searched.
The second line contains n space separated integers a[1],a[2],.......a[n].

Output Format:
If the element is present in the array then print its index or else -1. */

#include<iostream>
using namespace std;

int ternarySearch(int arr[],int n,int k)
{
    long l=0;
    long r=n-1;

    while(l<=r)
    {
        long m1= l+(r-l)/3;
        long m2= r-(r-l)/3;

        if(arr[m1]==k)
        {
            //Found
            return m1;
        }
        else if(arr[m2]==k)
        {
            //Found
            return m2;
        }
        
        else if(k<arr[m1])
        {
            r=m1-1;
        }

        else if(k>arr[m2])
        {
            l=m2+1;
        }
        
        else
        {
            l=m1+1;
            r=m2-1;
        }
    }

    return -1;

}

int main()
{
    int N;
    cout<<"Enter the size of the array"<<endl;
    cin>>N;
    int arr[10000];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched"<<endl;
    int K;
    cin>>K;
    int index=ternarySearch(arr,N,K);
    if(index!=-1)
    {
        cout<<K<<" is present at index "<<index<<endl;
    }
    else
    {
        cout<<index<<endl<<"The element is not presnt in the array"<<endl;
    }

}