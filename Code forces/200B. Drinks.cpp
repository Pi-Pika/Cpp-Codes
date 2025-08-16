#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,count = 0,a,b;
    cin >> n;
    b=n;
    
    while(n--) {
        cin >> a;
        count += a;
    }
    cout << count / b << endl;
    return 0;
}
