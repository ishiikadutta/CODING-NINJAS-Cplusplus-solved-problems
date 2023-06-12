/* Code : Inverted Number Pattern
Send Feedback
Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
333
22
1 */

#include<iostream>
using namespace std;
int main()
{
    int N,i=1,val;
    cin>>N;
    while(i<=N)
    {
        int j=1;
        val=N-i+1;
        while(j<=N-i+1)
        {
            cout<<val;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}