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
    string b;
    cin>>t;
    map <string, int> mp;
    while (t--)
    {
        cin >> n >>b ;
        if(n==1)
        {
            cin>>x;
            mp[b] += x;
        }else if(n==2)  mp[b] =0;
        else if(n==3)  cout << mp[b] << endl;
    }
    return 0;
}
