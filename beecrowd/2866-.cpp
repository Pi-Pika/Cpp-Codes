#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
   long long int t;
   cin>>t;
    while(t--)
    {
         int i,l;
         char c[10000];
        cin>>c;
        l=strlen(c);

        for ( i = l-1; i >=0; i--)
        {
           if(c[i]>='a' && c[i]<='z')
           {
            cout<<c[i];
           }
        }
        cout<<endl;
    }

    return 0;
}
