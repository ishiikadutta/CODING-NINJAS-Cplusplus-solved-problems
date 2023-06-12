/*Write a program to print first x terms of the series 3N + 2 which are not multiples of 4. */
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int i=1,val,count=1;
    while(count<=x)
    {
        val=3*i+2;
        if(val%4!=0)
        {
            cout<<val<<" ";
            count++;
        }
        
        /*if(count==x)
        {
            break;
        } */
        i++;
    }

}