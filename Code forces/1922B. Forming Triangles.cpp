#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <int,int> mp;
    long long int tc , n, count=0, a,k,lb;
    cin >> tc;
    for (size_t i{0}; i < tc; ++i )
    {
        cin >> n;
        vector <int> vec(n);
        for (size_t j{0}; j < n; ++j )
        {
            cin >> vec[j];
            mp[vec[j]]++;
        }
        sort(vec.begin(),vec.end());
        for (auto it:mp)
        {
            k = it.second;
            count += k*(k-1)*(k-2)/6;
            lb = lower_bound(vec.begin(),vec.end(),it.first)-vec.begin();
            count += (k*(k-1)/2)*lb;
        }
        cout << count << endl;
        count = 0;
        mp.clear();
        vec.clear();
    }
    cout << endl;
    return 0;
}
