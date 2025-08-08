#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int k,n,w,a=0, d=0;
    string s;
    cin >> n;
    cin >> s;
    vector<int> v;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A')
        {
            a++;
        }
        if (s[i] == 'D'){
            d++;
        }
    }
    if(a > d)       cout << "Anton" << endl;
    else if(d > a)  cout << "Danik" << endl;
    else            cout << "Friendship" << endl;
    return 0;
}