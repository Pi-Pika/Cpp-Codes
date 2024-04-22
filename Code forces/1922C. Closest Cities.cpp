#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int tc ,n, m,x,y;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        vector <int> v(n);
        vector <int> right(n);
        for (int i=0; i < n; ++i )
        {
            cin >> v[i];
        }
        right[0]=0;
        right[1]=1;

        for (int i=2; i < n; ++i )
        {
            if(v[i]-v[i-1] < v[i-1]-v[i-2])   right[i]=right[i-1]+1;
            else    right[i]=right[i-1]+v[i]-v[i-1];
        }
        vector <int> left(n);
        left[n-1] = 0;
        left[n-2] = 1;

        for (int i=n-3; i >= 0; i--)
        {
            if(v[i+1]-v[i] < v[i+2]-v[i+1])   left[i]=left[i+1]+1;
            else    left[i]=left[i+1]+v[i+1]-v[i];
        }

        cin >> m;
        for (int i=0; i < m; i++ )
        {
            cin >> x >> y;
            x--;
            y--;
            if(x<y) cout << right[y]-right[x] << endl;
            else cout << left[y]-left[x] << endl;
        }
        v.clear();
        right.clear();
        left.clear();
    }
    return 0;
}

