/*Print 2D Array
Given a 2D integer array with n rows and m columns. Print the 0th row from input n times, 1st row n-1 times…..
(n-1)th row will be printed 1 time.
Input format :
Line 1 : No of rows (n) and no of columns (m) (separated by single space)
Line 2 : Row 1 elements (separated by space)
Line 3 : Row 2 elements (separated by space)
Line 4 : and so on */
#include <iostream>
using namespace std;

void print2DArray(int arr[][100], int m, int n) 
{
    
    for(int i=0;i<n;i++) 
    {
        for(int k=0;k<n-i;k++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;  
        }     
    }
    
}

int main()
{
    int arr[100][100];
    int n,m;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
    cout<<"Enter number of columns"<<endl;
    cin>>m;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    print2DArray(arr,n,m);

}