
#include<bits/stdc++.h>
#define endl "\n"
#define in long long
#define dub double
#define dubb long double
#define pb push_back
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    in i,j,k,n,s,f,t,x;
    cin>>t;
    while (t--)
    {
        char c = 'a';
        cin >> n>> k;
        for (size_t i {0}; i < n; ++i )
        {
            for (size_t j {0}; j < k; ++j )
            {
                cout << c;
                c++;
            }
            c = 'a';
        }
        cout << endl;

    }
    return 0;
}
