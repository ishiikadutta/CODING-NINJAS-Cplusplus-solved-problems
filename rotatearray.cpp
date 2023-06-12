/*Rotate array
You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given 
array/list by D elements(towards the left).
Note:
Change in the input array/list itself. You don't need to return or print the elements.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the 
test cases follow.
First line of each test case or query contains an integer 'N' representing the size of the array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.
Third line contains the value of 'D' by which the array/list needs to be rotated.

Output Format :
For each test case, print the rotated array/list in a row separated by a single space.
Output for every test case will be printed in a separate line. */
#include<iostream>
using namespace std;

void rotate(int arr[],int d,int n)
{
    for(int i=0;i<d;i++)
    {
        int k=0;
        int current =arr[k];
        for(int j=1;j<n;j++)
        {
            arr[j-1]=arr[j];
        }
        arr[n-1]=current;
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
        int d;
        cout<<"Enter the number by which the array needs to be rotated "<<endl;
        cin>>d;
        rotate(arr,d,n);
        cout<<"The required array is:"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<' ';
        }

    }
}