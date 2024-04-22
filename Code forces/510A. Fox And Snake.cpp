#include<bits/stdc++.h>
#define endl "\n"
#define in long long
#define dub double
#define dubb long double
#define pb push_back
#define pi 3.14159265358979323846
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    in i,j,k,n,c=0,s,f,t,x;
    cin>>t>>n;
    for (size_t i {0}; i < t; ++i )
    {
        if(i%2 == 0)
        {
            for (size_t j {0}; j < n; ++j )
            {
                cout << "#";
            }
        }else
        {
            if(c%2 == 0)
            {
                for (size_t j {0}; j < n-1; ++j )
                {
                    cout << ".";
                }
                cout << "#";
                c++;
            }else
            {
                cout << "#";
                for (size_t j {0}; j < n-1; ++j )
                {
                    cout << ".";
                }
                c++;
            }
        }
        cout << endl;
    }
    return 0;
}
