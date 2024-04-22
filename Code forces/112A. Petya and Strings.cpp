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

    in i,j,k,n,c=0,s=0,f,t,x;
    string a,b;
    cin>>a>>b;
    for (size_t i {0}; i < a.size(); ++i )
    {
        if(tolower(b[i]) > tolower(a[i]))
        {
            cout << "-1" << endl;
            return 0;
        }
        else if(tolower(b[i]) < tolower(a[i]))
        {
            cout << "1" << endl;
            return 0;
        }
    }
    cout << "0" <<endl;
    return 0;
}
