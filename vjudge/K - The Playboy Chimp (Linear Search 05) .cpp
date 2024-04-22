#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <long long int> v;
    long long int tc, a, b, min, max, n, i;
    cin >> tc ;
    for(i = 0; i < tc; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    cin >> n;
    while(n--)
    {
        min = 0, max = 0;
        cin >> b;
        for (int j = 0; j < tc; j++ )
        {
            if(b > v.at(j))     min = v.at(j);
            if(b < v.at(j))
            {
                max = v.at(j);
                break;
            }
        }
        if(min == 0)    cout << "X ";
        else            cout << min << " ";
        if(max == 0)    cout << "X" << endl;
        else            cout << max << endl;
    }
    return 0;
}
