#include<bits/stdc++.h>

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

    in i, j, k, n, c = 0, s, f, t, x;
    string a;
    map<string, in> mp;
    vector<vector<int> > mat(5, vector<int>(5));

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 1) {
                c = abs(2 - i) + abs(2 - j);
            }
        }
    }
    cout << c << endl;

    return 0;
}