#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    char a[200000],b[20];
    while (scanf("%s%s",a,b)!=EOF)
    {
        int l1,i=0,l2,n,p,ar[10000],la,j;
        l1=strlen(a);
       l2=strlen(b);
       n=stoi(a);
       p=stoi(b);
        cout<<"$";
        while(1)
        {
           ar[i]=n%1000;
           n=n/1000;

           if(n==0)
           {
                 break;
           }
          i++;
        }
        j=i;
         for(i=j;i>=0;i--)
        {  if(i==0)
        {    printf("%03d.",ar[i]);

            if(p>9)
            {
                cout<<p<<endl;
            }
            else
            {
                cout<<"0"<<p<<endl;
            }
        }
        else if(i==j)
        {
            printf("%d,",ar[i]);
        }
        else
        {
             printf("%03d,",ar[i]);
        }

        }
    }
    return 0;
}
