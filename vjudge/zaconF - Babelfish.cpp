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
    string a,b;
    map < string,string> mp;

    while(getline(cin,a))
    {
        if(a.empty() == 1)   break;
        istringstream line(a);
        line >> a >> b;
        mp[b] = a;
    }

    while(cin >> a)
    {
        if(mp.count(a) == 1) cout << mp[a] << endl;
        else                cout << "eh" << endl;
    }
    return 0;
}
