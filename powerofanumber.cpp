/*Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1 */
#include<iostream>
using namespace std;
int main()
{
    int x,n,i=1,product=1;
    //cout<<"Enter the number and the power"<<endl;
    cin>>x>>n;

    while(i<=n)
    {
      product=product*x;
      i++;
    }
    
    cout<<product;
}