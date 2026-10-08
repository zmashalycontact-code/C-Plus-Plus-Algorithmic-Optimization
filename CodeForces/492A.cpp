/**
 * author:  Zeidan
 * created: 06.09.2025 20:35:20
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n;     cin >> n;
    ll h{}, lvl{1}, val{1};

    while(n>=val)
    {
        n-=val;
        h++;
        lvl++;
        val+=lvl;
    }

    print("{}", h);

    return 0;
}