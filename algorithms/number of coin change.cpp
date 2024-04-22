// Recursive C++ program for
// coin change problem.
#include <bits/stdc++.h>
using namespace std;

// Returns the count of ways we can
// sum coins[0...n-1] coins to get sum "sum"
int count(vector<int> coins, int size, int n)
{

    // If sum is 0 then there is 1 solution
    // (do not include any coin)
    if (n == 0)   return 1;

    // If sum is less than 0 then no
    // solution exists
    if (n < 0)    return 0;

    // If there are no coins and sum
    // is greater than 0, then no
    // solution exist
    if (size <= 0) return 0;

    // count is sum of solutions (i)
    // including coins[n-1] (ii) excluding coins[n-1]
    int ans = count(coins, size, n-coins[size - 1]) + count(coins, size-1, n);
    return ans;
}

// Driver code
int main()
{
    vector <int> coins = { 1, 2, 3};
    int size = coins.size();
    int n = 5;

    cout << "Number of coin change " << count(coins, size, n) << endl;

    return 0;
}
