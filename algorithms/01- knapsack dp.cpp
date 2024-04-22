#include <iostream>
#include <vector>

using namespace std;

// Function to solve 0-1 Knapsack problem using dynamic programming
int knapsack(int capacity, const vector<int>& weights, const vector<int>& values)
{
    int n = weights.size();

    // Create a 2D table to store the results of subproblems
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    // Build the DP table bottom-up
    for (int i = 1; i <= n; ++i)
    {
        for (int w = 1; w <= capacity; ++w)
        {
            // If the current item's weight is less than or equal to the current capacity
            if (weights[i - 1] <= w)
            {
                // Decide whether to include the item or not
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            } else
            {
                // If the current item's weight is greater than the current capacity, exclude the item
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][capacity];
}

int main()
{
    vector<int> weights = {10, 20, 30};
    vector<int> values = {60, 100, 120};
    int capacity = 50;

    int maxValue = knapsack(capacity, weights, values);

    cout << "Maximum value obtained from 0-1 Knapsack: " << maxValue << endl;

    return 0;
}

