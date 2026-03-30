#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, a[99999], i, target, j;
    cin >> t;
    for(i=0; i<t; i++) {
        cin >> a[i];
    }
    cin >> target;
    
    for(i=0; i<t-1; i++) {
        for(j=i+i; j<t; j++) {
            if ((a[i]+a[j]) == target){
                cout << i << " "<< j << endl;
                return 0;
            }
        }
    }
    return 0;
}