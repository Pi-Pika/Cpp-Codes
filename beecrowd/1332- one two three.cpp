#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{  int t;
    cin>>t;
    char a[6];
    while (t--)
    {
       cin>>a;
       int i,f1=0,f2=0,f3=0,l;
       l=strlen(a);
       if(l==3)
       {
            if(a[0]=='o')
            {
                f1++;
            }
            if(a[1]=='n')
            {
                f1++;
            }
            if(a[2]=='e')
            {
                f1++;
            }


            if(a[0]=='t')
            {
                f2++;
            }
            if(a[1]=='w')
            {
                f2++;
            }
            if(a[2]=='o')
            {
                f2++;
            }

       }
       else
       {
         cout<<3<<endl;
       }
       if(f1==2)
       {
        cout<<1<<endl;
       }
       else if(f2==2)
       {
            cout<<2<<endl;
       }

    }

   return 0;
    }
