#include <bits/stdc++.h>
#define endl "\n"
#define in long long
#define dub double
#define dubb long double
#define pb push_back
#define pi 3.14159265358979323846
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    in i, j, k, n, c, s, f, t, x, target;
    
    cin >> t;
    in arr[t+1];
    for (in i = 0; i < t; i++) {
        cin >> arr[i];
    }

    cin >> target;
    in sum = 0;
    unordered_map <in, in> map;
    for (in i=0; i<t; i++){
        if(map.find(target - arr[i]) != map.end()){
            if(map[target - arr[i]] < i) {
                cout << map[target - arr[i]] << " " << i << endl;
                return 0;
            }else {
                cout << i << " " << map[target - arr[i]] << endl;
                return 0;
            }
        }
        map[arr[i]] = i;
    }
    cout << -1 << " " << -1 << endl;
    return 0;
}