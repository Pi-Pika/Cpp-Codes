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

    in i, j, k, n, c, s, f, t, x, target, b, a, mid;
    cin >> t;
    cin >> a >> b;
    in  min= a, max= b;
    for (in i = 0; i < t-1; i++) {
        
        cin >> a >> b;
        if (a > max  && b > max) {
            cout << "[" << min << "," << max << "]" << " ";
            min = a;
            max = b;
        }else if (a < min  && b > max) {
            min = a;
            max = b;
        }else if (a > min  && b < max) {
            // do nothing
        }else if (a > min  && b > max) {
            max = b;
        }else if (a < min  && b < max) {
            min = a;
        }
    }
    cout << "[" << min << "," << max << "]" << endl;
    return 0;
}