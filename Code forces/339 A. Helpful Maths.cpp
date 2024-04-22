#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int o {0}, t {0}, r {0}, p {0};
    for (size_t i{0}; i < s.size(); ++i )
    {
        if(s[i] == '1')              o++;
        else if(s[i] == '2')         t++;
        else if(s[i] == '3')         r++;
        else                         p++;
    }
    while(o--)
    {
        cout << "1";
        if(p!=0)
        {
            cout << "+";
            p--;;
        }
    }
    while(t--)
    {
        cout << "2";
        if(p!=0)
        {
            cout << "+";
            p--;;
        }
    }
    while(r--)
    {
        cout << "3";
        if(p!=0)
        {
            cout << "+";
            p--;;
        }
    }
    cout << endl;
    return 0;
}

