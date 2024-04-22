// C++ program to find minimum
// number of denominations
#include <bits/stdc++.h>
using namespace std;

void findMin(vector<int>denomination, int n, int V)
{
    int count = 0;
    sort(denomination.begin(), denomination.end());

    // Initialize result
    vector<int> ans;

    // Traverse through all denomination
    for (int i = n - 1; i >= 0; i--) {

        // Find denominations
        while (V >= denomination[i])
        {
            V -= denomination[i];
            ans.push_back(denomination[i]);
        }
    }

    // Print result
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
        count++;
    }
    cout << "\nnumber of coin: " << count << endl;
}

// Driver Code
int main()
{
    // All denominations of Indian Currency
    vector<int> denomination = { 1, 2, 5, 10, 20, 50, 100, 500, 1000 };
    int size = denomination.size();
    int n = 93;
    cout << "Following is minimal" << " number of change for " << n << ": " << endl;

    // Function Call
    findMin(denomination, size, n);
    cout << endl;
    return 0;
}
