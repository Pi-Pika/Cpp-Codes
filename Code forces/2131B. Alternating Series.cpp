#include <bits/stdc++.h>
#define endl "\n"
#define in long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    in t; 
    cin >> t;
    while (t--) {
        in n; 
        cin >> n;
        vector<in> a(n);

        in positive_start = (n == 3) ? 3 : 2;
        in pos_val = positive_start;


        for (in i = 0; i < n; i++) {
            if ((i + 1) % 2 == 1) {
                a[i] = -1;
            } else {
                a[i] = pos_val;
                pos_val++;
            }
        }

        for (in i = 0; i < n; i++) {
            cout << a[i] << (i == n-1 ? '\n' : ' ');
        }
    }
    return 0;
}
