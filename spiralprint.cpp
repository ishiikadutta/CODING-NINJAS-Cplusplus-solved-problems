/*For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. That is, you need to
print in the order followed for every iteration:
a. First row(left to right)
b. Last column(top to bottom)
c. Last row(right to left)
d. First column(bottom to top)
 Mind that every element will be printed only once.

 Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test
cases follow.
First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space. They
represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.
Second line onwards, the next 'N' lines or rows represent the ith row values.
Each of the ith row constitutes 'M' column values separated by a single space.

Output format :
For each test case, print the elements of the two-dimensional array/list in the spiral form in a single line,
separated by a single space.
Output for every test case will be printed in a seperate line. */
#include <iostream>
using namespace std;
void spiralPrint(int a[][100], int n, int m)
{
    int startr = 0; // no. of rows
    int startc = 0; // no. of columns
    int count = m * n;
    while (count > 0)
    {
        int endr = n - 1 - startr;
        int endc = m - 1 - startc;
        for (int j = startc; j <= endc; j++)
        {
            cout << a[startr][j] << " ";
            count--;
        }

        for (int i = startr + 1; i < endr; i++)
        {
            cout << a[i][endc] << " ";
            count--;
        }

        for (int j = endc; j >= startc && count > 0; j--)
        {
            cout << a[endr][j] << " ";
            count--;
        }

        for (int i = endr - 1; i > startr; i--)
        {
            cout << a[i][startc] << " ";
            count--;
        }
        startr++;
        startc++;
    }
}
    int main()
    {
        int t;
        cout << "Enter number of test cases" << endl;
        cin >> t;
        while (t--)
        {
            int a[100][100];
            int n, m;
            cout << "Enter number of rows and columns" << endl;
            cin >> n >> m; // n=row,m=column
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cin >> a[i][j];
                }
            }
            spiralPrint(a, n, m);
        }
    }