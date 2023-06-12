/*Print the following pattern
Pattern for N = 4
   *
  ***
 *****
*******
The dots represent spaces. */
#include<iostream>
using namespace std;
int main()
{
    int N,i=1,j;
    cout<<"Enter any number"<<endl;
    cin>> N;

    while(i<=N)
    {
        j=1;
        while(j<=N-i)
        {
            cout<<" ";
            j=j+1;
        }
        j=1;
        while(j<=(2*i-1))
        {
          cout<<"*";
          j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}