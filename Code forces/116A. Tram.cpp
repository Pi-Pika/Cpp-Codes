#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,count = 0,a,b,max;
    cin >> n;
    n--;
    cin >> a >> b;
    count = a + b;
    max=count;
    
    while(n--) {
        cin >> a >> b;
        count = count - a + b;
        if (count > max) {
            max = count;
        }
    }
    cout << max << endl;
    return 0;
}
