/*Code Insertion Sort
Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 
'Insertion Sort'.
 Note:
Change in the input array/list itself. You don't need to return or print the elements.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the 
test cases follow.
First line of each test case or query contains an integer 'N' representing the size of the array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.

Output Format :
For each test case, print the elements of the array/list in sorted order separated by a single space.
Output for every test case will be printed in a separate line. */
#include<iostream>
using namespace std;

void insertionSort(int input[],int n)
{
    for(int i=1;i<n;i++)
    {   int j;
        int k=input[i];
        for(j=i-1;j>=0;j--)
        {
            if(k<input[j])
            {
                input[j+1]=input[j];
            }
            else
            {
                break;
            } 
        }
        input[j+1]=k;

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
        cout<<"Enter size of array :"<<endl;
        cin>>n;
        int input[1000];
        cout<<"Enter elements of array :"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>input[i];
        }
        cout<<"Unsorted array :"<<endl;
         for(int i=0;i<n;i++)
        {
            cout<<input[i]<<" ";
        }
        cout<<endl;
        insertionSort(input,n);
        cout<<"Sorted array :"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<input[i]<<" ";
        }
        cout<<endl;
    }
}