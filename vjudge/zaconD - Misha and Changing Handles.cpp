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
    cin>>t;
    string a,b;
    vector<pair <string,string>> v;

    while(t--)
    {
        c=0;
        cin>>a>>b;
        for(i=0; i<v.size(); ++i)
        {
            if(v[i].second == a)
            {
                v[i].second=b;
                c=1;
                break;
            }
        }
        if(c == 0)
        {
            v.push_back(make_pair(a,b));
        }
    }

    cout<<v.size()<<endl;
    for(i=0; i<v.size(); ++i)
    {
        cout << v[i].first << " " << v[i].second <<endl;
    }
    return 0;
}
