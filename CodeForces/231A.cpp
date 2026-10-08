/**
 * author:  Zeidan
 * created: 06.09.2025 20:05:44
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    ll t;   cin >> t;
    ll cntr{};
    while(t--)
    {
        ll p, v, t; cin >> p >> v >> t;

        bool case1(p+v+t>=2);

        if(case1)
            cntr++;
    }

    println("{}", cntr);

    return 0;
}