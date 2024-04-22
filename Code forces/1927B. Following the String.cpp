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
    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    in i,j,k,n,c,a,f,t,x;
    cin>>t;
    while (t--)
    {
        c = 0;
        cin>>n;
        vector<int> v;
        map<int,vector<int>> mp;
        for ( i = 0 ; i < n; ++i )
        {
            cin >> a;
            v.pb(a);
        }
        string s = "";
        for (auto i:v)
        {
            if(mp[i].size() == 0)
            {
                mp[i].pb('a');
                s+='a';
            }else
            {
                //cout << mp[i][i] <<" " << mp[i][mp[i].size()] << " " << mp[i][mp[i].size()-1]+1 <<endl;
                mp[i].pb(mp[i][mp[i].size()-1]+1);
                s += mp[i][mp[i].size()-1];
            }
//            for(auto it:mp)
//            {
//                for( i=0; i<it.second.size(); ++i)
//                {
//                    cout << it.first << " "<< it.second[i] <<endl;
//                }
//            }
//            cout << endl;
        }
        cout << s << endl;
    }
    return 0;
}
