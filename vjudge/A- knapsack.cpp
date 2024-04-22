#include <bits/stdc++.h>
using namespace std;

long long int knapSack(int n, vector<long long int> wt, vector<long long int> pro, int size)
{
    if (n == 0 || size == 0)   return 0;

    if (wt[size - 1] > n)
    {
        return knapSack(n, wt, pro, size - 1);
    }

    else
    {
        long long int a = pro[size-1] + knapSack(n - wt[size - 1], wt, pro, size - 1);
        long long int b = knapSack(n, wt, pro, size - 1);
        return max(a,b);
    }
}

int main()
{
    int tc, sack, a, b;
    vector <long long int> profit , weight;
    cin >> tc >> sack;
    for (size_t i {0}; i < tc; ++i )
    {
        cin >> a >> b;
        weight.push_back(a);
        profit.push_back(b);
    }

    int size = profit.size();
    cout << knapSack(sack, weight, profit, size) << endl;;
    return 0;
}

