#include<bits/stdc++.h>
#define endl "\n"
#define in long long
#define dub double
#define dubb long double
#define pb push_back
#define pi 3.14159265358979323846
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    in n, k;
    cin >> n;
    
    if(n % 2 == 0) {
        cout << "4" << " " << n-4 << endl;
    }else {
        cout << "9" << " " << n-9 << endl;
    }
    return 0;
}