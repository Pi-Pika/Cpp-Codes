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
        vector <in> v(n);
        for (size_t j {0}; j < n; ++j )
        {
            cin>>x;
            v[j]=x;
        }
        while(q--)
        {
            cin>>a>>b;
            auto it = find(v.begin(),v.end(),a);
            in in1 = it - v.begin();

            auto it1 = find(it,v.end(),b);
            in in2 = it1 - v.begin();
            if(it == v.end() || it1 == v.end())     cout << "NO" << endl;
            else    cout << "YES" <<endl;
        }
    }
    return 0;
}

