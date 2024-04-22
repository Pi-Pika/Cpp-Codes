#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <long long int> v;
    long long int tc, n, i, count, res, a;
    cin >> tc;
    while(tc--)
    {
        res = 0, count = -20001;
        cin >> n;
        for(i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        for(i = 0; i < n-1; i++)
        {
            res = v.at(i)-v.at(i+1);
            if(res >= count)    count = res;
        }
        cout << count <<endl;
        v.clear();
    }
    return 0;
}

