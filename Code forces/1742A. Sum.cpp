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

    in i,j,k,n,a,b,c,s,f,t,x,a1,b1,c1;
    cin>>t;
    while (t--)
    {
        cin >> a >> b >> c;
        if((a + b == c) || (a + c == b) || (b + c == a)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
