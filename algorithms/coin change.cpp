#include <bits/stdc++.h>
using namespace std;

int minCoins(vector<int> coins, int size, int N) // Function to return the minimum // coins needed
{
    // If we have a combination then
    if (N == 0)    return 0;

    int result = INT_MAX; // Currently result is initialised as INT_MAX

    for (int i = 0; i < size; i++) // run until availability of coins
    {
        if (coins[i] <= N)
        { // Add to the list of counting
            int sub_res = 1 + minCoins(coins, size, N - coins[i]); // add 1 due to the coin inclusion
            // see if result can minimize
            if (sub_res < result)   result = sub_res;
        }
    }
    return result;
}

int main()
{
    vector <int> coins = { 10, 25, 5 };
    int n = 30; // the money to convert
    int size = coins.size(); // total availability of coins
    cout << "Minmum coins needed are " << minCoins(coins, size, n) << endl;
}
