#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;
    char a[100000],b[100000];
    while (t--)
        {
        cin>>a>>b;
        long long int l1,l2,p,n,j,i,flag=0;
        l1=strlen(a);
        l2=strlen(b);
        p=l1-l2;
        for(i=l2-1,j=l1-1; i>=0,j>=0; i--,j--)
        {
            if(a[j]== b[i])
            {
                flag++;
            }
        }
        if(flag==l2)
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
