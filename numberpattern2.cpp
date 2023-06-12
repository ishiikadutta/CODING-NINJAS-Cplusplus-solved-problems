/*Print the following pattern
Pattern for N = 4
    1
   23
  345
 4567
 
The dots represent spaces. */
#include<iostream>
using namespace std;
int main()
{
    int N,i=1,j,val,k;
    cout<<"Enter any number"<<endl;
    cin>> N;

    while(i<=N)
    {
        j=1;
        val=i;
        while(j<=N-i)
        {
            cout<<" ";
            j=j+1;
        }
        k=1;
        while(k<=i)
        {
            cout<<val;
            val=val+1;
            k=k+1;
        }
        cout<<endl;
        i=i+1;
    }
}