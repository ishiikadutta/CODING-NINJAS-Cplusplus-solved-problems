/* Code : Interesting Alphabets
Send Feedback
Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE */

#include<iostream>
 using namespace std;
 int main()
 {
     int N;
     cin>>N;
     int i=1;
     while(i<=N)
     {
         char startChar=64+N-i+1;
         int j=1;
         while(j<=i)
         {
             char ch=startChar+j-1;
             cout<<ch;
             j++;
         }
         cout<<endl;
         i++;
     }
     return 0;
 }
