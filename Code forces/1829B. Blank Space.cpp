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

    in i,j,k,n,s=0,f,t,x;
    
    cin >> n;
    while(n--){
        cin >> k;
        s = 0;
        vector<in> v;

        while(k--){
            cin >> t;
            if(t == 1) {
                v.pb(s);
                s = 0;
            } else if (t == 0){
                s++;
            }
        }
        
        v.pb(s); 

        sort(v.begin(), v.end());
        cout << v.back() << '\n';
    }
    return 0;
}
