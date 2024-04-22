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

    in i,j,k,n,c,s,f,t,x;
    vector<in> v;
    cin>>t;
    while (t--)
    {
        c = 0;
        cin >> n >> k;
        if (k == (4*n-2))   cout << (k/2)+1 << endl;
        else
        {
            if (k%2 == 0)   cout << k/2 <<endl;
            else            cout << k/2+1 << endl;
        }
        v.clear();
    }
    return 0;
}
