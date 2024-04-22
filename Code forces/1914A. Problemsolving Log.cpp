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
    map<char,int> mp;
    for (i=0; i<t; i++)
    {
        c=0,j=0;
        cin>>n>>a;
        for (size_t i {0}; i < a.size(); ++i )
        {
            mp[a[i]]++;
        }
        for (auto it:mp)
        {
            j=it.first-64;
            if(j <= it.second) c++;
        }
        cout<< c<< endl;
        mp.clear();
    }
    return 0;
}

