#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    double n,m = 0,c,a,b,maxV;
    cin >> n;
    
    while(n--) {
        cin >> a >> b >> c;
        maxV = max({a, b, c});
        if ( a < b && b < c) {
            cout << "STAIR" << endl;
        } else if ( a < b && b > c ) {
            cout << "PEAK" << endl;
        } else {
            cout << "NONE" << endl;
        }
    }
    return 0;
}
