#include <bits/stdc++.h>
#define endl "\n"
#define in long long
using namespace std;

bool allUniqueDigits(const string &s) {
    for (size_t i = 0; i < s.size(); i++) {
        for (size_t j = i + 1; j < s.size(); j++) {
            if (s[i] == s[j])
                return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    in t;
    cin >> t;

    while (true) {
        t++;
        string s = to_string(t);
        if (allUniqueDigits(s)) {
            cout << t << endl;
            break;
        }
    }

    return 0;
}
