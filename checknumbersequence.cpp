/*You are given S, a sequence of n integers i.e. S = s1, s2, ..., sn. Compute if it is possible to split S into 
two parts : s1, s2, ..., si and si+1, si+2, ….., sn (0 <= i <= n) in such a way that the first part is strictly 
decreasing while the second is strictly increasing one.
Note : We say that x is strictly larger than y when x > y.
So, a strictly increasing sequence can be 1 4 8. However, 1 4 4 is NOT a strictly increasing sequence.

That is, in the sequence if numbers are decreasing, they can start increasing at one point. And once the sequence of numbers starts increasing, they cannot decrease at any point further.
Sequence made up of only increasing numbers or only decreasing numbers is a valid sequence. So, in both the cases, print true.
You just need to print true/false. No need to split the sequence. */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int prev,current;
    cin>>prev;
    bool dec=true;

    for(int i=1;i<=n-1;i++)
    {
        cin>>current;
        cout<<endl;
        if(current<prev && dec!=false)
        {
            dec=true;
        }

        else if(current>prev)
        {
            dec=false;
        }

        else
        {
            cout<<"false"<<endl;
            return 0;
        }
        prev=current;

    }

    cout<<"true"<<endl;
    return 0;
}