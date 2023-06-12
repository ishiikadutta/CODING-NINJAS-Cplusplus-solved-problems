/*Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) = F(2) = 1
Provided N you have to find out the Nth Fibonacci Number. */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f1=1,f2=1,sum=0;
    if(n==1)
        {
            sum=f1;
        }
        else if(n==2)
        {
            sum=f2;
        }
    for (int i = 3; i <=n && n>2; i++)
    {
        
        sum=f1+f2;
        f1=f2;
        f2=sum;

    }
    cout<<sum<<endl;
    

}