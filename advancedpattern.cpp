/*
Print the following pattern:
1   2   3    4   5
16               6
15               7
14               8
13  12  11  10   9 */
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int i=1;
    int x= N+1;
    int y= 4*(N-1);
        
    while(i<=N)
    {
        if(i==1)
        {
            int j=1;
            while(j<=N)
            {
                cout<<j<<"\t";
                j++;
            }
            cout<<endl;
        }
        
        while(i>=2 && i<=(N-1))
        {  
           int k=1;
        
            cout<<y<<"\t";
            int z=1;
                while(z<=N-2)
                {
                    cout<<" "<<"\t";
                    z++;
                }
                cout<<x<<"\t";
                cout<<endl;
                cout<<endl;
            x++;
            y--;
            i++;
        }

        if(i==N)
        {
            int p=4*(N-1)-(N-2);
            while(p>=(2*N-1))
            {
                cout<<p<<"\t";
                p--;
            }
        }
        cout<<endl;
        i++;
    }
}