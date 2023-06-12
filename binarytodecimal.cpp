/*Binary to decimal
Given a binary number as an integer N, convert it into decimal and print. */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n;
cin>>n;
int i=0,decimal=0,a;
while(n!=0)
{
    a=n%10;
    decimal= decimal+pow(2,i)*a;
    n=n/10;
    i++;
}
cout<<decimal<<endl;
}
