#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc ;
    while (tc--)
    {
        int max = 0, min = 99, a, n;
        cin >> n ;
        for (int i = 0; i<n; i++ )
        {
            cin >> a;
            if(a >= max)    max = a;
            if(a <= min)    min = a;
        }
        cout << (max-min)*2 << endl;
    }
    return 0;
}


