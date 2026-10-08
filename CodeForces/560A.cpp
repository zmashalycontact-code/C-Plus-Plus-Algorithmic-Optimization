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
    bool chk(false);

    while(t--)
    {
        ll val;     cin >> val;
        if(val==1)
            chk=true;
    }

    if(chk)
        cout << -1 << '\n';
    else
        cout << 1 << '\n';
}