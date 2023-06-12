/*Print the following pattern
Pattern for N = 4
1
23
345
4567 */
#include<iostream>
using namespace std;
int main()
{
    int N,i=1,j,val;
    cout<<"Enter any number"<<endl;
    cin>>N;

    while(i<=N)
    {  
        j=1;
        val=i;
       while(j<=i)
       {
           cout<<val;
           j=j+1;
           val=val+1;
           
       }
       cout<<endl;
       i=i+1;
    }
}