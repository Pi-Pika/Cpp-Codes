#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
 
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
 
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<int, pair<ll, ll>>> vp(n);
    for (auto &[l, r] : vp)
        cin >> l >> r.first >> r.second;
    sort(all(vp));
 
    ll res = k, cur = k, i = 0;
 
    priority_queue<pair<ll, ll>> pq;
 
    while (1)
    {
        while (i < n and vp[i].first <= cur)
        {
            ll rval = vp[i].second.second;
            ll Limit = vp[i].second.first;
            pq.push({rval, Limit});
            ++i;
        }
 
        while (!pq.empty() and pq.top().second < cur)
            pq.pop();
 
        if (pq.empty())
            break;
        auto [a, b] = pq.top();
        pq.pop();
        cur = a;
        res = max(res, cur);
    }
    cout << res << endl;
}
 
int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}