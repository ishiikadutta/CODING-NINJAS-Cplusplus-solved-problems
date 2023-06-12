/*Fahrenheit to Celsius Table
Send Feedback
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert 
all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the 
table */
#include<iostream>
using namespace std;

void print(int S,int E,int W)
{
    while(S<=E)
    {
        int C=(5*(S-32)/9);
        cout<<S<<"\t"<<C<<endl;
        S=S+W;
    }
}

int main()
{
    int S,E,W;
    cin>>S>>E>>W;
    print(S,E,W);
}

#include<iostream>
using namespace std;
void printTable(int start,int end,int step)
{   
   int c;
    while(start<=end)
    {
        c=(start-32)*5/9;
        cout<<start<<"\t"<<c<<endl;
        start=start+step;
        
    }
}

