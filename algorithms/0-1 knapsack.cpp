#include <bits/stdc++.h>
using namespace std;

// A utility function that returns
// maximum of two integers
int max(int a, int b)
{
    return (a > b) ? a : b;
}

// Returns the maximum value that
// can be put in a knapsack of capacity W
int knapSack(int n, vector<int> wt, vector<int> pro, int size)
{
    // Base Case
    if (n == 0 || size == 0)   return 0;
    // If weight of the nth item is more
    // than Knapsack capacity W, then
    // this item cannot be included
    // in the optimal solution
    if (wt[size - 1] > n)
    {
        return knapSack(n, wt, pro, size - 1);
    }
    // Return the maximum of two cases:
    // (1) nth item included
    // (2) not included
    else
    {
        int a = pro[size-1] + knapSack(n - wt[size - 1], wt, pro, size - 1);
        int b = knapSack(n, wt, pro, size - 1);
        return max(a,b);
    }
}
// Driver code
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector <int> profit = { 60, 100, 120 };
    vector <int> weight = { 10, 20, 30 };
    int n = 50;
    int size = profit.size();
    cout << knapSack(n, weight, profit, size) << endl;;
    return 0;
}

