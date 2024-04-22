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

    in i,j,k,n,c=0,s,f,t,x;
    cin>>t;
    string a;
    map<string,in> mp;
    for (i=0; i<t; i++)
    {
        cin>>a;
        mp[a]++;
        if(mp[a] > 1)   cout << a << mp[a]-1 <<endl;
        else            cout << "OK" <<endl;
    }
    return 0;
}
