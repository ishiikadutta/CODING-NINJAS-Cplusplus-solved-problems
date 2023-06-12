/*Highest Occuring Character
For a given a string(str), find and return the highest occurring character.

Example:
Input String: "abcdeapapqarr"
Expected Output: 'a'
Since 'a' has appeared four times in the string which happens to be the highest frequency character, the answer
would be 'a'.
If there are two characters in the input string with the same frequency, return the character which comes first.

Consider:
Assume all the characters in the given string to be in lowercase always.

Input Format:
The first and only line of input contains a string without any leading and trailing spaces.

Output Format:
The only line of output prints the updated string.

Note:
You are not required to print anything explicitly. It has already been taken care of.*/
#include <iostream>
using namespace std;
char highestOccurringChar(char input[])
{
    int freq[256] = {0};
    for (int i = 0; input[i] != '\0'; i++)
    {
        freq[input[i]]++;
    }
    int max_idx = 0;
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > freq[max_idx])
        {
            max_idx = i;
        }
    }
    char max_freq = max_idx;
    return max_freq;
}

int main()
{
    char str[1000];
    cout << "Enter the string" << endl;
    cin >> str;
    cout<<highestOccurringChar(str);
    
}