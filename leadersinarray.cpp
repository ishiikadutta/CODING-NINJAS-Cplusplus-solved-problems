/*Leaders in array
Given an integer array A of size n. Find and print all the leaders present in the input array. An array element 
A[i] is called Leader, if all the elements following it (i.e. present at its right) are less than or equal to A[i].
Print all the leader elements separated by space and in the same order they are present in the input array.
Input Format :
Line 1 : Integer n, size of array
Line 2 : Array A elements (separated by space)
Output Format :
leaders of array (separated by space)  */
#include <iostream>
using namespace std;
void Leaders(int arr[],int n)
{
    int output[1000];
    bool flag=1;
    int j=0;
    for(int i=0;i<n;i++)
    {
        for(int l=i+1;l<n;l++)
        {
            if(arr[i]<arr[l])
            {
                flag=0;
                break;
            }
            flag=1;
        }
      if(flag)
      {
            output[j]=arr[i];
            j++;
      }
        
    }

    for(int k=0;k<j;k++)
    {
        cout<<output[k]<<' ';
    }
    cout<<endl;

}

int main()
{
    int n;
    cout<<"Enter the length of the array"<<endl;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Leaders(arr,n);
}