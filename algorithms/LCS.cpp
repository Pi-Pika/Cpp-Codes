/* A Naive recursive implementation of LCS problem */
#include <bits/stdc++.h>

using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs(string X, string Y, int m, int n)
{
    if (m == 0 || n == 0)   return 0;
    if (X[m - 1] == Y[n - 1])
        return 1 + lcs(X, Y, m - 1, n - 1);
    else
        return max(lcs(X, Y, m, n - 1), lcs(X, Y, m - 1, n));
}

/* Utility function to get max of 2 integers */


/* Driver program to test above function */
int main()
{
    string x = "AGGTAB";
    string y = "GXTXAYB";

    int m = x.size();
    int n = y.size();

    cout << "Length of LCS is " << lcs(x, y, m, n) << endl;

    return 0;
}

