#include<bits/stdc++.h>
using namespace std;


int main()
{
   long long int t,a,b,sum;
    cin>>t;
    while(t--)
    {
         cin>>a>>b;

         sum=a+(b*2)+1;
         if(a==0 && b!=0)
         {
            cout<<"1"<<endl;
         }
         else if(a!=0 && b==0)
         {
            cout<<a+1<<endl;
         }
         else
         {
            cout<<sum<<endl;
         }
    }

     return 0;
}
