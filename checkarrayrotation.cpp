/*Check Array Rotation
You have been given an integer array/list(ARR) of size N. It has been sorted(in increasing order) and then rotated
by some number 'K' in the right hand direction.
Your task is to write a function that returns the value of 'K', that means, the index from which the array/list has
been rotated.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test 
cases follow.
First line of each test case or query contains an integer 'N' representing the size of the array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.

Output Format :
For each test case, print the value of 'K' or the index from which which the array/list has been rotated.
Output for every test case will be printed in a separate line. */
#include<iostream>
using namespace std;
int arrayRotateCheck(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i+1]<arr[i])
        {
        return i+1;
        }
    }
    return 0;
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
       
        cout<<"The index is:"<<endl;
        cout<<arrayRotateCheck(arr,n)<<endl;  
        cout<<endl;

    }
}
/*
int arrayRotateCheck(int *input, int size)
{
    int min=input[0],min_idx=0;
    for(int i=1;i<size;i++)
    {
        if(input[i]<min)
        {
            min=input[i];
         min_idx=i;
        }
    }
    return min_idx;
} */