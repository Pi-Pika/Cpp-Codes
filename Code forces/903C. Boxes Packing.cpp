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
    map<in,in> mp;
    for (i=0; i<t; i++)
    {
        cin>>j;
        mp[j]++;
    }
    for (auto it:mp)
    {
        if(it.second > c) c= it.second;
    }
    cout << c <<endl;
    return 0;
}
