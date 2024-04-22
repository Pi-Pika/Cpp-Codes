#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {   int p,l,i,lb,m=0;
        char a[200];
        int  b[200] = {0};
        cin>>a;
        l=strlen(a);
        for ( i = 0; i < l; i++)
        {
           //p=a[i]-'0';

           b[a[i]]++;
            m=max(m,b[a[i]]);
        //cout<<"m= "<<m <<"ar= "<<a[i]<<endl;
        }
        for ( i = 0; i < 129 ; i++)
        {
           if(b[i]==m)
           {
            printf("%c",i);
           }
        }
        cout<<endl;

    }

    return 0;
}
