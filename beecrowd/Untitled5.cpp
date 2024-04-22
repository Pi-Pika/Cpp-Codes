#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string a,b;
    while (t--)
    {
        cin>>a>>b;
        int l1,l2;
        l1=strlen(a);
        l2=strlen(b);
        if(a[l1-1]==a[l2-1])
        {
            cout<<"encaixa"<<endl;
        }
        else
        {
            cout<<"nao encaixa"<<endl;
        }
    }

   return 0;
    }
