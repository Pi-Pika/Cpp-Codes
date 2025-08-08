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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    in j,k,n,s=0,f,t,x;
    vector<in> v;
    for (size_t i = 1; i <=3000; i++)
    {
        if((i % 3 == 0) || (i % 10 == 3) ) {
            
        }else {
            v.pb(i);
        }
    }
    
    
    cin >> n;
    while(n--){
        cin >> k;
        cout << v[k-1] << endl;
    }
    return 0;
}
