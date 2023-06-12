/*
You have been given an unimodal function:
        f(x)=2x^2-12x+7
with N intervals. For each interval ,you will be given two integer values l and r, where yo need to find the min 
value of f(x) where x will be in range [l,r] (both inclusive).

Input Format:
The first line will consist of one integer N denoting the no. of intervals. In the next N lines,each line contains
2 space- separated integers,l ,and r denoting the range of the interval.

Output Format:
Print N lines, where ith line denotes the min value of f(x), where x will be in the range [l,r]. */
#include<iostream>
using namespace std;

double func(double x)
{
   //f(x)=2x^2-12x+7 
   return 2*x*x-12*x+7;
}

double findMin(double l,double r)
{
        
     while(r-l>0.000001)
    {
        double m1= l+(r-l)/3;
        double m2= r-(r-l)/3;
        double fm1=func(m1);
        double fm2=func(m2);
        if(fm1>fm2)
        {
            l=m1;
        }

        else if(fm1<fm2)
        {
            r=m2;
        }

        else
        {
            l=m1;
            r=m2;
        }
    }
    return func(l);
}

int main()
{
    int N;
    cin>>N;

    while(N--)
    {
        double l,r;
        cin>>l>>r;
        cout<<findMin(l,r);
    }
}