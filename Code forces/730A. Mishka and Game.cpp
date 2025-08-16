#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,m = 0,c = 0,a,b,max;
    cin >> n;
    
    while(n--) {
        cin >> a >> b;
        if ( a > b ) {
            m++;
        }else if ( a < b ) {
            c++;
        }
    }
    if ( m > c ) {
        cout << "Mishka" << endl;
    }else if ( m < c ) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
        return 0;
    }
    return 0;
}
