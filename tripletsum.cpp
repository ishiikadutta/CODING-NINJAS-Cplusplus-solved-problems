/*Triplet Sum
You have been given a random integer array/list(ARR) and a number X. Find and return the number of triplets in 
the array/list which sum to X.
Note :
Given array/list can contain duplicate elements.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run.
 Then the test cases follow.
First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.
Third line contains an integer 'X'.

Output format :
For each test case, print the total number of triplets present in the array/list.
Output for every test case will be printed in a separate line.*/
#include<iostream>
using namespace std;
int tripletSum(int arr[],int n,int x)
{
    int count=0;
   for(int i=0;i<n-2;i++)
    {
        int j,k;
        for(j=i+1;j<n-1;j++)
        {   
            for(k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    count++;
                }
            }  
        }
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int arr[1000];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x;
        cin>>x;
        int a=tripletSum(arr,n,x);
        cout<<a<<endl;
    }

}