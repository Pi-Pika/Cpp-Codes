#include<bits/stdc++.h>
#define endl "\n"
#define in long long
#define dub double
#define dubb long double
#define pb push_back
using namespace std;
map<in,vector<in>>m;
map<in,in>vis,par,lvl,dis;
//vector<in>seq;
void bfs(in st)
{
    queue<in>q;
    vis[st]=1;
    dis[st]=0;
    par[st]=-1;
//    lvl[dis[st]]++;
    q.push(st);
    while(!q.empty())
    {
        in cur=q.front();
//        seq.push_back(cur);
        q.pop();
        for(auto it=m[cur].begin();it!=m[cur].end();it++)
        {
            if(!vis[*it])
            {
                vis[*it]=1;
                dis[*it]=dis[cur]+1;
                par[*it]=cur;
//                lvl[dis[*it]]++;
                q.push(*it);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    in i,j,k,n,c=0,s=0,f=0,t,x,e,y;
    cin>>t;
    while(t--){
        cin>>n>>e;
        for (i=0;i<e;i++)
        {
            cin>>x>>y;
            m[x].push_back(y);
            m[y].push_back(x);
        }
        for(auto it=m.begin();it!=m.end();it++){
            if(!vis[it->first])
            {
                bfs(it->first);
            }
        }

        m.clear();
        dis.clear();
        vis.clear();
        par.clear();
    }
    return 0;
}


