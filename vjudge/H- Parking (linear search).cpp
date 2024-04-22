#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,n,tc;
    cin >> tc ;
    vector <int> v(0);
    for (int j=1;j<=tc;j++ )
    {
        long long int h = 0, result = 0;
        cin >> n ;
        if(n == 1)   cout << result << endl;
        else
        {
            for (int i = 0; i<n; i++ )
            {
                cin >> a;
                v.push_back(a);
            }
            sort(v.begin(),v.end());
            result = abs(v.at(0)-v.at(v.size()-1));
            for (int i = v.size()-1; i > 0; --i )
                {
                    result += abs(v.at(i)-v.at(i-1));
                }
            cout << result << endl;
        }
        v.clear();
    }
    return 0;
}

