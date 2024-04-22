#include<bits/stdc++.h>
#define endl "\n"
#define in long long
#define dub double
#define dubb long double
#define pb push_back
using namespace std;
map<in,vector<in>>m;
map<in,in>vis,dis;
map<in,in>par;
in dfs(in st)
{
    vis[st]=1;
    for (in i=0;i<m[st].size();i++){
        in cur=m[st][i];
        if(!vis[cur]){
            par[cur]=st;
            dis[cur]=dis[par[cur]]+1;
            dfs(cur);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    in i,j,k,n,s,f,t,x,y,e,w,c;
    cin>>t;
    while (t--)
    {
        s=0,f=0,c=0;
        cin>>n>>e;
        for(i=0;i<e;i++)
        {
            cin>>x>>y;
            m[x].pb(y);
            m[y].pb(x);
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(!vis[it->first])
            {
                dfs(it->first);
                dis[it->first]=0;
                par[it->first]=-1;
            }
        }

        vis.clear();
        dis.clear();
        par.clear();
        m.clear();
    }
    return 0;
}
