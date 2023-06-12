/*Compress the String
Write a program to do basic string compression. For a character which is consecutively repeated more than once, 
replace consecutive duplicate occurrences with the count of repetitions.

Example:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".
The string is compressed only when the repeated character count is more than 1.

Note:
Consecutive count of every character in the input string is less than or equal to 9.

Input Format:
The first and only line of input contains a string without any leading and trailing spaces.

Output Format:
The output contains the string after compression printed in single line.

Note:
You are not required to print anything. It has already been taken care of. Just implement the given function.*/
#include <iostream>
#include<string>
using namespace std;
string getCompressedString(string &str) 
{
    string newstr,strcounter;//strcounter is for counting duplicates
    for(int i=0;i<str.length();i++)
    {
        int counter=1;
        int j=i+1;
        while(str[i]==str[j])
        {
            counter++;
            str.erase(j,1);
        }

        if(counter==1)
        {
            newstr+=str[i];
        }

        else
        {
            strcounter=to_string(counter);
            newstr+=str[i]+strcounter;
        }
   
    }
    return newstr;
}
    

int main()
{
    string str;
    cout << "Enter the string" << endl;
    cin>>str;
    cout<<getCompressedString(str);
    
}