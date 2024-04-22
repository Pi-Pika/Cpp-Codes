#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v;
    int a, b, tc, upokar = 0, n, res = 0;
    cin >> tc >> n;
    for(int i = 1; i <= tc; i++)
    {
        cin >> a;
        v.push_back(a);
        if(i == n)  res = a;
    }
    if (res == 0)
    {
        for (int i = 0; i < tc; i++ )
        {
            if(v.at(i) > res)  upokar++;
        }
    }else
    {
        for (int i = 0; i < tc; i++ )
        {
            if(v.at(i) >= res)  upokar++;
        }
    }
    cout << upokar << endl;
    return 0;
}
