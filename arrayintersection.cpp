/*ou have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. 
You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists 
contain a particular value or to put it in other words, when there is a common value that exists in both the 
arrays/lists.
Note :
Input arrays/lists can contain duplicate elements.
The intersection elements printed would be in the order they appear in the first array/list(ARR1)

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.
First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements of the first the array/list.
Third line contains an integer 'M' representing the size of the second array/list.
Fourth line contains 'M' single space separated integers representing the elements of the second array/list.

Output format :
For each test case, print the intersection elements in a row, separated by a single space.
Output for every test case will be printed in a separate line. */
#include<iostream>
#include<climits>
using namespace std;
void intersection(int arr1[], int arr2[],int n,int m)
{
    for(int i=0;i<=n-1;i++)
    {
        int j;
        for(j=0;j<=m-1;j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
                arr2[j]=INT_MIN;
                break;
            }
        
            
        }
        
        
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
        int arr1[100000];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        int m;
        cin>>m;
        int arr2[100000];
        for(int i=0;i<n;i++)
        {
            cin>>arr2[i];
        }
        intersection(arr1,arr2,n,m);
        
        
    }
}