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

    in i, j, k, n, c=0, s, f, t, x, a;
    
    cin >> t;
    in arr[t+1] = {0}, brr[t+1];
    for (in i = 0; i < t; i++) {
        cin >> a;
        if(arr[a] == 0) {
            brr[c] = a;
            c++;
        }
        arr[a]++;
    }

    for (in i = 0; i < c-1; i++) {
        if (arr[brr[i]] != arr[brr[i + 1]]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}