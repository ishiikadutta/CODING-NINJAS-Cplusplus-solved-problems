/*Print the following programs
1.....1
.2...2
..3.3
...4
..3.3
.2...2
1.....1
dot represent spaces. */
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
        while(j<=i-1)
        {
            cout<<" ";
            j++;
        }

        cout<<i;

        int k=2*N-1-2*i;
        while(k>0)
        {
            cout<<" ";
            k--;
        }
        if(i!=N)
        {
            cout<<i;
        }

        while(j<=i-1)
        {
            cout<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    i=N-1;
    while(i>0)
    {
        int j=i-1;
        while(j>0)
        {
            cout<<" ";
            j--;
        }
        
        cout<<i;

        int k=2*(N-i)-1;
        int n=1;
        while(n<=k)
        {
            cout<<" ";
            n++;
        }

        cout<<i;
        j=i-1;
        while(j>0)
        {
            cout<<" ";
            j--;
        }
        cout<<endl;
        i--;
    }
    return 0;
}