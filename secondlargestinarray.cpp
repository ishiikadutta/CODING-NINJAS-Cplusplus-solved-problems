/*Second Largest in array
You have been given a random integer array/list(ARR) of size N. You are required to find and return the second 
largest element present in the array/list.
If N <= 1 or all the elements are same in the array/list then return -2147483648 or -2 ^ 31(It is the smallest 
value for the range of Integer)

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test 
cases follow.
The first line of each test case or query contains an integer 'N' representing the size of the array/list.
The second line contains 'N' single space separated integers representing the elements in the array/list.

Output Format :
For each test case, print the second largest in the array/list if exists, -2147483648 otherwise.
Output for every test case will be printed in a separate line. */
#include<iostream>
#include<climits>
using namespace std;

int findSecondLargest(int arr[], int n)
{
    int sm,m;
    sm=m=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(m<arr[i])
        {
            sm=m;
            m=arr[i];
        }

        if(sm<arr[i] && m!=arr[i])
        {
            sm=arr[i];
        }
    }
    return sm;
    
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
       
        cout<<"The second largest element is:"<<endl;
        int ans= findSecondLargest(arr,n);
        cout<<ans;  
        cout<<endl;

    }
}