/**
 * author:  Zeidan
 * created: 19.09.2025 15:24:40
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
    
int main()
{
    ll t;   cin >> t;
    while(t--)
    {
        string s;   cin >> s;
        ll size=s.size();

        sort(s.begin(), s.end());

        bool chk(true);

        for(ll x{1}; x<size; x++)
            if(s[x]!=s[x-1]+1)
            {
                chk=false;
                break;
            }

        if(chk)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}