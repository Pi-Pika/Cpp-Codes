
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the length of the Longest Common Subsequence
int lcsLength(const string& str1, const string& str2) {
    int m = str1.length();
    int n = str2.length();

    // Create a 2D table to store the results of subproblems
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Build the DP table bottom-up
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}

// Function to find the Longest Common Subsequence
string lcs(const string& str1, const string& str2) {
    int m = str1.length();
    int n = str2.length();

    // Create a 2D table to store the results of subproblems
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Build the DP table bottom-up
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // Reconstruct the LCS
    int i = m, j = n;
    string result;

    while (i > 0 && j > 0)
    {
        if (str1[i - 1] == str2[j - 1])
        {
            result = str1[i - 1] + result;
            --i;
            --j;
        } else if (dp[i - 1][j] > dp[i][j - 1])
        {
            --i;
        } else
        {
            --j;
        }
    }

    return result;
}

int main() {
    string str1 = "ABCBDAB";
    string str2 = "BDCAB";

    cout << "Longest Common Subsequence Length: " << lcsLength(str1, str2) << endl;

    string result = lcs(str1, str2);
    cout << "Longest Common Subsequence: " << result << endl;

    return 0;
}
