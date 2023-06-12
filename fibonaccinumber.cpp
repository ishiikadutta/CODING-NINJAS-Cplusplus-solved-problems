/*Fibonacci Number
Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of 
fibonacci series else false.
Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
where F(0) = 0 and F(1) = 1 */
#include<iostream>
using namespace std;
bool checkMember(int n)
{
    int f0=0;
    int f1=1;
    int next=0;
    while(next<n)
    {
        next=f0+f1;
        f0=f1;
        f1=next;
    }
    if(next==n)
    {
     return true;
    }
    return false;
    
}