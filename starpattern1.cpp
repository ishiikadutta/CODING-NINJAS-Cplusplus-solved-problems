/*Code : Star Pattern
Print the following pattern
Pattern for N = 4
   *
  ***
 *****
*******

The dots represent spaces.*/
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
        while(k<=i)
        {
            cout<<'*';
            k++;
        }
        j=i-1;
        while(j>=1)
        {
            cout<<'*';
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
