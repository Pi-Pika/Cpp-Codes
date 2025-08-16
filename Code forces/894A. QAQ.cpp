#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    double n,m = 0,c,a,b,maxV;
    string s;
    cin >> s;
    
    for(int i = 0; i < s.size(); i++) {
        if (s[i] == 'Q') {
            for (size_t j = i+1; j < s.size(); j++)
            {
                if(s[j] == 'A') {
                    for (size_t k = j+1; k < s.size(); k++)
                    {
                        if(s[k] == 'Q') {
                            m++;
                        }
                    }
                }
            }
            
        } 
    }
    cout << m << endl;
    return 0;
}
