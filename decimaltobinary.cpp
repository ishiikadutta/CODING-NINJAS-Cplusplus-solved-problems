/*Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note: The given input number could be large, so the corresponding binary number can exceed the integer range. 
So you may want to take the answer as long for CPP and Java.

Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that function 
is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" 
function to work for non-float data types. */
#include<iostream>
using namespace std;
int main()
{
   long n;
   cin>>n;
   int ans=0;
   int i=1,rem;

   while(n!=0)
   {
       rem=n%2;
       ans=ans+i*rem;
       i=i*10;
       n=n/2;
   }
   cout<<ans<<endl;
    return 0;
}
