#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v;
    long long int tc , n, count;
    string a,b,c;
    cin >> tc;
    for (size_t i{0}; i < tc; ++i )
    {
        count = 0;
        cin >> n;
        cin >> a >> b >> c;

        for (size_t j{0}; j < n; ++j )
        {
            if((c[j] != a[j]) && (c[j] != b[j]))
                count = 1;
        }
        if(count == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

