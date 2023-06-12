/*Code : Diamond of stars
Print the following pattern for the given number of rows.
Note: N is always odd.
Pattern for N = 5
..*
.***
*****
.***
..*

The dots represent spaces. */

#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int i=1;
    while(i<=(N+1)/2)
    {
        int j=1;
        while(j<=(((N+1)/2)-i))
        {
            cout<<' ';
            j++;
        }
        int k=1;
        while(k<=((2*i)-1))
        {
            cout<<'*';
            k++;
        }
        cout<<endl;
        i++;
    }
    while(i>((N+1)/2) && i<=N)
    {
        int j=1;
        while(j<=(i-((N+1)/2)))
        {
            cout<<' ';
            j++;
        }
        int k=1;
        while(k<=(2*(N-i)+1))
        {
            cout<<'*';
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
    
}