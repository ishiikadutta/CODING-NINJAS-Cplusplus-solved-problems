/*Largest Row or Column
For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the 
largest sum(sum of all the elements in a row/column) amongst all the rows and columns.

Note :
If there are more than one rows/columns with maximum sum, consider the row/column that comes first. And if ith row 
and jth column has the same largest sum, consider the ith row as answer.

Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test 
cases follow.
First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space. They
represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.
Second line onwards, the next 'N' lines or rows represent the ith row values.
Each of the ith row constitutes 'M' column values separated by a single space.

Output Format :
For each test case, If row sum is maximum, then print: "row" <row_index> <row_sum>
OR
If column sum is maximum, then print: "column" <col_index> <col_sum>
It will be printed in a single line separated by a single space between each piece of information.
Output for every test case will be printed in a seperate line. 

Consider :
If there doesn't exist a sum at all then print "row 0 -2147483648", where -2147483648 or -2^31 is the 
smallest value for the range of Integer.*/
#include <iostream>
using namespace std;
#include<climits>
void findLargest(int a[][100], int n, int m)
{
    int maxr=INT_MIN;
    int maxc=INT_MIN;
    int max_indexr=0;
    int max_indexc=0;
    
    //for row
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            sum=sum+a[i][j];
        }
        if(sum>maxr)
        {
            maxr=sum;
            max_indexr=i;
        }
    }

    //for column
    for(int j=0;j<m;j++)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i][j];
        }
        if(sum>maxc)
        {
            maxc=sum;
            max_indexc=j;
        }
    }

    if(maxr>=maxc)
    {
        cout<<"row "<<max_indexr<<" "<<maxr;
    }
    else
    {
        cout<<"column "<<max_indexc<<" "<<maxc;
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
        cout<<"The largest row and column is :"<<endl;
        findLargest(a,n,m);
        cout<<endl;

    }
}
