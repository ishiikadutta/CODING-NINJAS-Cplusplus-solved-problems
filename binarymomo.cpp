#include <iostream>
using namespace std;
int binarySearch(int *input, int n, int val)
{

int l=0;
    int u=n-1;
    while(l<=u)
    {
        int m=(l+u)/2;
        if(val==input[m])
         return m;
        else if(input[m]>val)
            u=m-1;
        else
            l=m+1;
    }
    return -1;
}

int main()
{

 int size;
 cin >> size;
 int *input = new int[size];

 for(int i = 0; i < size; ++i)
 {
  cin >> input[i];
 }
 
 int t;
 cin >> t;

 while (t--)
 {
  int val;
  cin >> val;
  cout << binarySearch(input, size, val) << endl;
 }
 
 delete [] input;
 return 0;
}