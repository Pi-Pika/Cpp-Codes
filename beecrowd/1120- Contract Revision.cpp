#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
   char a[100000];
   int b;
   while (cin>>b>>a)
   {

    char c[100000];
    int flag=0,j=0;
    if(a=="0" && b==0)
    {
      break;
    }
    int l=strlen(a);
    int i;
        for(i=0;i<l; i++)
        {
            if(b!=a[i]-'0')
            {
                flag=1;
                c[j]=a[i];
                j++;
            }
        }
        int l1=strlen(c);
        if(flag==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            if(l1<=10)
            {
                    long long int p=stoi(c);
            cout<<p<<endl;
            }
            else
            {
                cout<<c<<endl;
            }
        }
   }
    return 0;
}
