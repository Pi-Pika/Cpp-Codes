
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

    in i,j,k,n,c=0,s=0,f,t,x;
    cin>>t>>n;
    string a,b;
    map<string,string> mp;
    for (i=0; i<t; i++)
    {
        cin>>a>>b;
        mp[a] = b;
    }
    map<string,int> nmap;
    map<string,int> cmap;
    for (i=0; i<n; i++)
    {
        cin>>a;
        nmap[a]++;
        if(nmap[a] > s) s=nmap[a];

        b= mp[a];
        cmap[b]++;
        if(cmap[b] > c) c=cmap[b];

    }
    for(auto it:cmap)
    {
        if(it.second == c)
        {
            cout << it.first <<endl;
            break;
        }
    }
    for(auto it:nmap )
    {
        if(it.second == s)
        {
            cout << it.first <<endl;
            break;
        }
    }
    return 0;
}

