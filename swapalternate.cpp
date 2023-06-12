/*Swap Alternate
You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the 
array/list.
You don't need to print or return anything, just change in the input array itself.

Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the 
test cases follow.
First line of each test case or query contains an integer 'N' representing the size of the array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.

Output Format :
For each test case, print the elements of the resulting array in a single row separated by a single space.
Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1sec */
#include<iostream>
using namespace std;
void swapAlternate(int arr[],int n)
{
    int first=0;
    int second=1;

    while(first<n-1)
    {
        int temp=arr[first];
        arr[first]=arr[second];
        arr[second]=temp;
        first+=2;
        second+=2;

    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[100000];
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        swapAlternate(arr,n);

        for(int j=0;j<n;j++)
        {
            cout<<arr[j]<<' ';
        }
        cout<<endl;

    }
}