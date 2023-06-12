/*Given an array of length N, you need to find and print the sum of all elements of the array.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces */
#include<iostream>
using namespace std;
int main()
{
    int N,sum=0;
    cin>>N;
    int input[1000000];
    for(int i=0;i<N;i++)
    {
        cin>>input[i];
        sum=sum+input[i];
    }
    cout<<sum<<endl;
    return 0;

}