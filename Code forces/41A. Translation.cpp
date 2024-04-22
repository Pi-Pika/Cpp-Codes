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

    in i,j,k,n,s=0,f,t,x;
    string a,b,c;
    cin>>a>>b;
    c=b;
    for (j=b.size()-1;  j >= 0;j-- )
    {
        c[s]= a[j];
        s++;
    }
    if(c == b)  cout << "YES" <<endl;
    else cout << "NO" << endl;
    return 0;
}
