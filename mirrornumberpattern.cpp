/*Code : Mirror Number Pattern
Send Feedback
Print the following pattern for the given N number of rows.
Pattern for N = 4

. . . 1
. . 1 2
. 1 2 3
1 2 3 4 
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
        while(j<=(N-i))
        {
            cout<<' ';
            j++;
        }
        int k=1;
        while(k<=i)
        {
            cout<<k;
            k++;
        }
        cout<<endl;
        i++;
    }
}