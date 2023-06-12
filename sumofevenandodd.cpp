/*Write a program to input an integer N and print the sum of all its even digits and
 sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 
and odd digits are 1, 3 & 5. */
#include<iostream>
using namespace std;
int main()
{
    int N,a,sum1=0,sum2=0;
   cout<<"Enter any number"<<endl;
    cin>>N;
    while(N!=0) //can use (N>0) also
    {
        a=N%10;
        if(a%2==0)
        {
          sum1=sum1+a;
        }
        else
        {
            sum2=sum2+a;
        }
        N=N/10;
    }
    cout<<sum1;
    cout<<" ";
    cout<<sum2;
}