/*Push Zeros to end

You have been given a random integer array/list(ARR) of size N. You have been required to push all the zeros that 
are present in the array/list to the end of it. Also, make sure to maintain the relative order of the non-zero 
elements.
Note:
Change in the input array/list itself. You don't need to return or print the elements.
You need to do this in one scan of array only. Don't use extra space.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.
First line of each test case or query contains an integer 'N' representing the size of the array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.

Output Format :
For each test case, print the elements of the array/list in the desired order separated by a single space.
Output for every test case will be printed in a separate line. */
#include<iostream>
using namespace std;

void pushZeroesEnd(int arr[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp; 
                //swap(arr[i],arr[j]); (this can also be used!)
                j++;
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
        pushZeroesEnd(arr,n);
        cout<<"The required array is:"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<' ';
        }

    }
}