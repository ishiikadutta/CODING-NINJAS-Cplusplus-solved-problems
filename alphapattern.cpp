/* Code : Alpha Pattern
Send Feedback
Print the following pattern for the given N number of rows.
Pattern for N = 3
 A
 BB
 CCC */
 #include<iostream>
 using namespace std;
 int main()
 {
     int N;
     cin>>N;
     int i=1;
     while(i<=N)
     {
         char startChar='A'+i-1;
         int j=1;
         while(j<=i)
         {
             cout<<startChar;
             j++;
         }
         cout<<endl;
         i++;
     }
     return 0;
 }