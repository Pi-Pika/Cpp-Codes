#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[1000];
    int m=0;
    while (cin.getline(c,1000))
    {
        int i,p=0,l,j,flag=0,q=0;
        char a[1000],b[1000];
        l=strlen(c);
        if(c[0]=='0')
        {
            cout<<"\nThe biggest word: "<< b <<endl;
            break;
        }
        for ( i = 0; i < l; i++)
        {
            if(c[i]!=' ')
            {
                p++;
                a[q]=c[i];
                q++;

            }
            else
            {    m=max(p,m);
            flag=1;
            q=0;
                  if(m==p)
                  {
                    for ( j = 0; j < p; j++)
                    {
                        b[j]=a[j];
                    }
                  }
                cout<<p<<'-';
                p=0;
            }
        }
        if(flag==0)
        {
            m=max(m,p);
            if(m==p)
            {
                for ( j = 0; j < p; j++)
                    {
                        b[j]=a[j];
                    }
            }
        }
        cout<<p<<endl;
    }
    return 0;
}
