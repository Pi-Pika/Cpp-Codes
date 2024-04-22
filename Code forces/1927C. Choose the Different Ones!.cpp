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

    in i,j,k,c,c1,c2,m,n,o,a,s,f,t,x;
    cin>>t;
    while (t--)
    {
        c1=0,c=0,c2=0,k=0;
        cin>>m>>n>>o;
        unordered_map<int,int>mp,mp0;
        for (size_t i {0}; i < m; ++i )
        {
            cin>>a;
            mp[a]++;
        }
        for (size_t i {0}; i < n; ++i )
        {
            cin>>a;
            mp0[a]++;
        }
        for (size_t i {1}; i <= o; ++i )
        {
            c=0;
            if(mp[i])
            {
                c = 1;
                c1++;
            }
            if(mp0[i])
            {
                c=1;
                c2++;
            }
            if(c==0)
            {
                cout << "NO"<<endl;
                k=1;
                break;
            }
        }
        if(k==1)    cout << "";
        else if(c1 >= o/2  && c2>=o/2)   cout << "YES"<< endl;
        else                        cout << "NO"<<endl;

    }
    return 0;
}
