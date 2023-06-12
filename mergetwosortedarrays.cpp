/*Code Merge Two Sorted Arrays
You have been given two sorted arrays/lists(ARR1 and ARR2) of size N and M respectively, merge them into a third
 array/list such that the third array is also sorted.

Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.
First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements of the first array/list.
Third line contains an integer 'M' representing the size of the second array/list.
Fourth line contains 'M' single space separated integers representing the elements of the second array/list.

Output Format :
For each test case, print the sorted array/list(of size N + M) in a single row, separated by a single space.
Output for every test case will be printed in a separate line. */
#include<iostream>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int ans[])
{
    
    int i=0,j=0,c=0;
    while(i<n && j<m)
    {
        if(arr1[i]>arr2[j])
        {
            ans[c]=arr2[j];
            j++;
        }

        else
        {
            ans[c]=arr1[i];
            i++;
        }
        c++;
    }

    
        while(i<n)
        {
            ans[c]=arr1[i];
            c++;
            i++;
        }
    
        while(j<m)
        {
            ans[c]=arr2[j];
            c++;
            j++;
        }
}

int main()
{
    int t;
    cout<<"Enter number of test case :"<<endl;
    cin>>t;

    while(t--)
    {
        int n;
        cout<<"Enter size of array 1 :"<<endl;
        cin>>n;
        int arr1[100000];
        cout<<"Enter elements of array 1 :"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        int m;
        cout<<"Enter size of array 2 :"<<endl;
        cin>>m;
        int arr2[100000];
        cout<<"Enter elements of array 2 :"<<endl;
        for(int i=0;i<m;i++)
        {
            cin>>arr2[i];
        }
        int ans[1000];
        merge(arr1,n,arr2,m,ans);
        cout<<"Array 1:"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
        cout<<"Array 2:"<<endl;
        for(int i=0;i<m;i++)
        {
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
        cout<<"Merged array :"<<endl;
        for(int i=0;i<n+m;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}