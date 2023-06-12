/*Sum of Two Arrays
Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively. Both the arrays/lists
contain numbers from 0 to 9(i.e. single digit integer is present at every index). The idea here is to represent 
each array/list as an integer in itself of digits N and M.
You need to find the sum of both the input arrays/list treating them as two integers and put the result in another
array/list i.e. output array/list will also contain only single digit at every index.
Note:
The sizes N and M can be different. 
Output array/list(of all 0s) has been provided as a function argument. Its size will always be one more than the
size of the bigger array/list. Place 0 at the 0th index if there is no carry. 
No need to print the elements of the output array/list.
Using the function "sumOfTwoArrays", write the solution to the problem and store the answer inside this output 
array/list. The main code will handle the printing of the output on its own.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test 
cases follow.
First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements of the first array/list.
Third line contains an integer 'M' representing the size of the second array/list.
Fourth line contains 'M' single space separated integers representing the elements of the second array/list.

Output Format :
For each test case, print the required sum of the arrays/list in a row, separated by a single space.
Output for every test case will be printed in a separate line. */
#include<iostream>
#include<math.h>
using namespace std;
int sumOfTwoArrays(int arr1[], int n, int arr2[], int m, int ans[])
{
    int ans_size,num1=0,num2=0;
    if(n>m)
        ans_size=n;
    else
        ans_size=m;

        for(int j=0,i=n-1;i>=0,j<n;i--,j++)
        {
            num1=num1+arr1[j]*pow(10,i);    
        }
         for(int j=0,i=m-1;i>=0,j<m;i--,j++)
        {
            num2=num2+arr2[j]*pow(10,i);
        }
        int sum=num1+num2;
        for(int i=ans_size;i>=0;i--)
        {
            int a=sum%10;
            sum=sum/10;
            ans[i]=a;
        }
        return ans_size;
}
int main()
{
    int t;
    cout<<"Enter number of test case :"<<endl;
    cin>>t;

    while(t--)
    {
        int n;
        cout<<"Enter size of array 1 :"<<endl;
        cin>>n;
        int arr1[100000];
        cout<<"Enter elements of array 1 :"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        int m;
        cout<<"Enter size of array 2 :"<<endl;
        cin>>m;
        int arr2[100000];
        cout<<"Enter elements of array 2 :"<<endl;
        for(int i=0;i<m;i++)
        {
            cin>>arr2[i];
        }
        int ans[10000];
        int ans_size=sumOfTwoArrays(arr1,n,arr2,m,ans);
      
        cout<<"Sum of two arrays :"<<endl;
        for(int i=0;i<ans_size+1;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
    }
}