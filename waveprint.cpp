/*Wave Print

For a given two-dimensional integer array/list of size (N x M), print the array/list in a sine wave order, i.e, 
print the first column top to bottom, next column bottom to top and so on.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test 
cases follow.
First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space. They 
represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.
Second line onwards, the next 'N' lines or rows represent the ith row values.
Each of the ith row constitutes 'M' column values separated by a single space.

Output format :
For each test case, print the elements of the two-dimensional array/list in the sine wave order in a single line, 
separated by a single space.
Output for every test case will be printed in a seperate line. */
#include <iostream>
using namespace std;

void wavePrint(int a[][100], int n, int m)
{
    for(int j=0;j<m;j++)
    {
           if(j%2==0)
            {
                for(int i=0;i<n;i++)
                {
                    cout<<a[i][j]<<" ";
                }
            }
            else
            {
                for(int i=n-1;i>=0;i--)
                {
                    cout<<a[i][j]<<" ";
                }
            }
    }
}

int main()
{
    int t;
    cout<<"Enter number of test cases"<<endl;
    cin>>t;
    while(t--)
    {
        int a[100][100];
        int n,m;
        cout<<"Enter number of rows and columns"<<endl;
        cin>>n>>m; //n=row,m=column
        for(int i =0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        wavePrint(a,n,m);
    }
}