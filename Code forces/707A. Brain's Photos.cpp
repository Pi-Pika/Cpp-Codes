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

    in i,j,k,n,c,f,t,x=0;
    char s;
    cin>>t>>n;
    for(j=0; j<t; j++)
    {
        for(i=0; i<n; i++)
        {
            cin>>s;
            if(s == 'C' || s=='M' || s=='Y')    x=1;
        }
    }
    if(x==1)    cout << "#Color" << endl;
    else    cout << "#Black&White" << endl;
    return 0;
}
