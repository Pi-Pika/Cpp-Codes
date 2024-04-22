#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long int a,n,tc;
    cin >> tc ;
    for (int j=1;j<=tc;j++ )
        {
            vector <int> v(0);
            long long int h=0;
            cin >> n ;
            for (int i=0;i<n;i++ )
                {
                    cin >> a;
                    v.push_back(a);
                }
            for (int i=0;i<v.size();i++ )
                {
                    if(h < v.at(i)) h = v.at(i);
                }
            cout << "Case " << j << ": " << h << endl;
        }
    return 0;
}
