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

    in i,j,k,n,c=0,s=0,f,t,x,a,b,q;
    cin>>t;

    while(t--)
    {
        cin>>n>>q;
        //vector <in> v(n);
        map<in,vector<in>> mp;
        for (i=0; i<n ; ++i)
        {
            cin>>x;
            mp[x].pb(i);
        }
//        for(auto it:mp)
//        {
//            cout << it.first << " " ;
//            for (size_t i {0}; i < it.second.size(); ++i )
//            {
//                cout << it.second[i] ;
//            }
//            cout << endl;
//        }
        while(q--)
        {
            cin>>a>>b;
            if(mp[a].empty()==1 || mp[b].empty()==1)
            {
                cout << "NO" <<endl;
                continue;
            }
            if(a==b)
            {
                cout << "YES" << endl;
                continue;
            }
            if(mp[a][0] < mp[b][mp[b].size()-1])
            {
                cout << "YES" << endl;
                continue;
            }else
            {
                cout << "NO" << endl;
                continue;
            }
        }
    }
    return 0;
}

