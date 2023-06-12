/*Second Largest
Take input a stream of n integer elements, find the second largest element present.
The given elements can contain duplicate elements as well. If only 0 or 1 element is given, 
the second largest should be INT_MIN ( - 2^31 ).
Input format :
Line 1 : Total number of elements (n)
Line 2 : N elements (separated by space) */
#include<iostream>
using namespace std;
#include<climits>
int main()
{
    int n;
    cin>>n;
    cout<<endl;
    int first=INT_MIN,second=INT_MIN,x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x>first)
        {
            second=first;
            first=x;
            
        }
        else if(x>second && x<first)
            second=x;
    }
    cout<<second<<endl;
    return 0; 
} 

