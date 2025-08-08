#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int k,n,w,c=0;
    cin >> k >>n >> w;
    vector<int> v;
    for(int i = 1; i <= w; i++)
    {
        c = c + (k*i);
    }

    if (c > n){
        cout << c - n << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}