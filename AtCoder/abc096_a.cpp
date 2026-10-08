/**
 * author:  Zeidan
 * created: 05.09.2025 19:33:24
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll m, d;    cin >> m >> d;
    
    bool chk(d>=m);

    if(chk)
        cout << m;
    else
        cout << m-1;

    return 0;
}