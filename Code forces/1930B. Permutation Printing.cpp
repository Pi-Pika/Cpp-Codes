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

    in i,k,n,c,s,f,t,x;
    cin>>t;
    while (t--)
    {
        cin>>n;
        vector<in> a(n,-1);
        c = n;
        for(int j=1; j<n; j+=2)
        {
            a[j] = c;
            c--;
        }
        for(int j=0; j<n; j+=2)
        {
            a[j] = c;
            c--;
        }
        for(int j=0; j<n; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
        a.clear();
    }
    return 0;
}
