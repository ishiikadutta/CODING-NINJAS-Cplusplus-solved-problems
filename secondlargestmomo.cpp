#include<iostream>
using namespace std;
#include <climits>


int main()
{
int n,i=1,num,m=INT_MIN,sm=INT_MIN;
    cin>>n;
    cout<<endl;
    while(i<=n)
    {
        cin>>num;
        if(num>m)
        {
            sm=m;
            m=num;
        }
        else if(num>sm && num<m)
            sm=num;
        i++;
    }
    cout<<sm;
    return 0;
}