#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int caw=0, eye=0,i;
    while (getline(cin,s))
    {
        if(s[2]=='*')   eye=eye+1;
        if(s[0]=='*')   eye=eye+4;
        if(s[1]=='*')  eye=eye+2;

        if(s=="caw caw")
        {
            caw++;
            cout<<eye<<endl;
            eye=0;
        }
        if(caw==3)  break;
    }
    return 0;
}
