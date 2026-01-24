#include <bits/stdc++.h>
#define endl "\n"
#define in long long
#define dub double
#define dubb long double
#define pb push_back
#define pi 3.14159265358979323846
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '(') {
                st.push(')');
            }
            else if (c == '{') {
                st.push('}');
            }
            else if (c == '[') {
                st.push(']');
            }
            else {
                if (st.empty() || st.top() != c) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

int main() {
    string s = "({}[)]";
    Solution sol;
    cout << boolalpha << sol.isValid(s);
    return 0;
}