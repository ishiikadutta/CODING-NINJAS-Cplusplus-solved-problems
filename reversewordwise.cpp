/*Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second
word at 2nd place and so on. Individual words should remain as it is.

Input format :
String in a single line

Output format :
Word wise reversed string in a single line */
#include <iostream>
using namespace std;

int length(char input[])
{
    int n = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        n++;
    }
    return n;
}

void reverseCompleteString(char input[], int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
}

void reverse(char input[], int start, int end)
{
    while (start < end)
    {
        int temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }
}

void reverseStringWordWise(char input[], int n)
{

    int start = 0, end;
    for (int i = 0; i < n + 1; i++)
    {
        if (input[i] == ' ' || input[i] == '\0')
        {
            end = i - 1;
            reverse(input, start, end);
            start = i + 1;
        }
    }
}

int main()
{
    char S[1000];
    cout << "Enter the string" << endl;
    cin.getline(S, 1000);
    int n = length(S);
    reverseCompleteString(S, n);
    reverseStringWordWise(S, n);
    cout << S;
}