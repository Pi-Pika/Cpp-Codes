#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>> a;
    vector<int> v;
    for(int i = 0; i < 5; i++)
    {
        cin >> b;
        v.push_back(b);
    }

    auto it = find(v.begin(), v.end(), a);
    cout << (it != v.end() ? "Found" : "Not Found") << endl;
    return 0;
}