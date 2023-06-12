#include<iostream>
using namespace std;
int main()
{ 
     char ch=1;
     int i=1;
     while(i<=255)
     {   ch=i;
         cout<<i<<" "<<ch<<sizeof(ch)<<endl;
         i++;
     }
}