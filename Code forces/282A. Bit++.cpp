#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v;
    long long int tc , n=0 , count;
    string a;
    cin >> tc;
    for (size_t i{0}; i < tc; ++i )
    {
        cin >> a;
        count = a.find("++");
        if(count != string::npos)
            n++;
        else
            n--;
    }
    cout << n << endl;
    return 0;
}
