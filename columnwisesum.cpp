/*Column Wise Sum

Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.

Input Format :
First and only line of input contains M and N, followed by M * N space separated integers representing the elements
in the 2D array.

Output Format :
Sum of every ith column elements (separated by space) */
#include <iostream>
using namespace std;
int main()
{
    int a[100][100];
    int m,n;
    cin>>m>>n;
    for(int i =0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int j=0;j<n;j++)
    {
        int sum=0;
        for(int i=0;i<m;i++)
        {
            sum=sum+a[i][j];
        }
        cout<<sum<<" ";
    }
    

}
