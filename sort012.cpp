/*Sort 0 1 2
You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. Write a solution to sort this 
array/list in a 'single scan'.
'Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting 
each element in the array/list just once.

Note:
You need to change in the given array/list itself. Hence, no need to return or print anything. 

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test
cases follow.
First line of each test case or query contains an integer 'N' representing the size of the array/list.
Second line contains 'N' single space separated integers(all 0s, 1s and 2s) representing the elements in the array/list.

Output Format :
For each test case, print the sorted array/list elements in a row separated by a single space.
Output for every test case will be printed in a separate line. */
#include<iostream>
using namespace std;
void sort012(int *arr, int n)
{
    int nz=0,nt=n-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==2 && i<n-2)
        {
            arr[i]=arr[nt];
            arr[nt]=2;
            nt--;       
        }
        if(arr[i]==0)
        {
            arr[i]=arr[nz];
            arr[nz]=0;
            nz++;
        }
     
    }
}
int main()
{
    int t;
    cout<<"Enter the test case number"<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter size of array"<<endl;
        cin>>n;
        int arr[10000];
        cout<<"Enter the elemnts of array"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
       
        sort012(arr,n);
        cout<<"The required array is :"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<' ';
        }
 
        cout<<endl;
    }
}
/*
void sort012(int *arr, int n)
{
    int i=0,nz=0,nt=n-1;
    while(i<=nt)
    {
        if(arr[i]==0)
        {
            swap(arr[nz],arr[i]);
            i++;
            nz++;
        }
        else if(arr[i]==2)
        {
            swap(arr[i],arr[nt]);
            nt--;
        }
        else if(arr[i]==1)
            i++;
    }
} */