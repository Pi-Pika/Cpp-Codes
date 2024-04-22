#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v1,v2;
    int a, b, tc, upokar = 0;
    cin >> tc ;
    for(int i = 0; i < tc; i++)
    {
        cin >> a >> b;
        v1.push_back(a);
        v2.push_back(b);
    }
    for (int i  =0; i < tc; i++ )
    {
        for (int j = 0; j < tc; j++ )
        {
            if(v1.at(i) == v2.at(j))  upokar++;
        }
    }
    cout << upokar << endl;
    return 0;
}
