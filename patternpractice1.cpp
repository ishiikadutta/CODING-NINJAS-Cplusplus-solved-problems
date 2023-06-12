/*Print the following patterns:
1)
55555
45555
34555
23455
12345 */
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>> N;
    int i=N;
    int j,k;
    while(i>=1)
    {
        k=i;
        j=1;
         while(j<=N)
        {
           if(k<=N)
           {
               cout<<k;
           }
           else
           {
             cout<<N;
           }
           k++;
           j++;
        }
       
        cout<<endl;
        i--;
    }
}