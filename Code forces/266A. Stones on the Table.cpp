#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v;
    long long int tc , n, count = 0;
    cin >> tc;
    string a;
    cin >> a;

    for (size_t i{0}; i < tc-1; ++i )
    {
        if (a[i] == a[i+1] )
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

