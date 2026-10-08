/**
 * author:  Zeidan
 * created: 05.09.2025 18:25:02
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n, m, a;    cin >> n >> m >> a;

    bool chk1(n%a!=0);
    bool chk2(m%a!=0);

    ll w{n/a};
    ll h{m/a};

    if(chk1)
        w++;
    if(chk2)
        h++;

    print("{}", w*h);

    return 0;
}