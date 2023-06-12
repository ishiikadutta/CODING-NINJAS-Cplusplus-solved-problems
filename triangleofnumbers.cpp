/*Code : Triangle of Numbers
Print the following pattern for the given number of rows.
Pattern for N = 4
...1
..232
.34543
4567654
The dots represent spaces. */
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int i=1;
    while(i<=N)
    {
        int j=1;
        while(j<=N-i)
        {
            cout<<' ';
            j++;
        }
        int k=1;
        int val=i;
        while(k<=i)
        {
            cout<<val;
            val++;
            k++;
        }
        val=2*i-2;
        j=i-1;
        while(j>=1)
        {
            cout<<val;
            val--;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

