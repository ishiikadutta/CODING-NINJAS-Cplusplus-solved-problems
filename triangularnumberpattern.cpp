/*Print the following pattern for the given N number of rows.
Pattern for N = 4
1
22
333
4444   */
#include<iostream>
using namespace std;
int main()
{
    int N,i=1,j,val;
    cin>> N;
    while(i<=N)
    {
        j=1;
        val=i;
        while(j<=i)
        {
            cout<<val;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}