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
    map<char,in> mp;
    string a;
    mp.insert(make_pair('A',0));
    mp.insert(make_pair('B',0));
    mp.insert(make_pair('C',0));

    for (size_t i {0}; i < 3; ++i )
    {
        cin>>a;
        if(a[1] == '>')     mp[a[0]]++;
        else                mp[a[2]]++;
    }
    if(mp['A']==mp['B'] || mp['B']==mp['C'] || mp['C']==mp['A'])    cout << "Impossible";
    else
    {
        for (auto it:mp)
        {
            if(it.second == 0)     cout << it.first;
        }
        for (auto it:mp)
        {
            if(it.second == 1)     cout << it.first;
        }
        for (auto it:mp)
        {
            if(it.second == 2)     cout << it.first;
        }
    }
    cout << endl;
    return 0;
}
