#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int tc , n;
    bool count = true;
    cin >> tc;
    for (size_t i{0}; i < tc; ++i )
    {
        cin >> n;
        if(n == 1)  count = false;
    }
    if(count == false)  cout << "HARD" << endl;
    else    cout << "EASY" <<endl;
    return 0;
}
