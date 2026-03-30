#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;
    
    int i = 0;
    int j = a.size() - 1;
    
    // Using size_t prevents the signed/unsigned comparison warning
    for (size_t k = 0; k < a.size() / 2; k++) {
        if (a[i] != a[j]) {
            cout << "not palindrome" << endl;
            return 0;
        }
        i++;
        j--;
    }
    
    cout << "palindrome" << endl;
    return 0;
}