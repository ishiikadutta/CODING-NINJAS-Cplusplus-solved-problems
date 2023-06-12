/*Print All Substrings

For a given input string(str), write a function to print all the possible substrings.

Substring
A substring is a contiguous sequence of characters within a string.
Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters taken are not contiguous

Input Format:
The first and only line of input contains a string without any leading and trailing spaces. All the characters in
the string would be in lower case.

Output Format:
Print the total number of substrings possible, where every substring is printed on a single line and hence the total
number of output lines will be equal to the total number of substrings.

Note:
The order in which the substrings are printed, does not matter.

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.
Time Limit: 1 second */
#include <iostream>
using namespace std;

void printSubstrings(char input[])
{
    for (int k = 0; input[k] != '\0'; k++)
    {
        for (int i = k; input[i] != '\0'; i++)
        {
            for (int j = k; j <= i; j++)
            {
                cout << input[j];
            }
            cout << endl;
        }
    }
}
int main()
{
    char S[1000];
    cout << "Enter the string" << endl;
    cin.getline(S, 1000);
    printSubstrings(S);

}
