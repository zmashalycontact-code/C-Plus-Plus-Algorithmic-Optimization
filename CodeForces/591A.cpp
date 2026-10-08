/**
 * author:  Zeidan
 * created: 05.09.2025 20:26:56
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll l, p, q;     cin >> l >> p >> q;
    double speed{(double)p+q};
    double time{(double)l/speed};
    double space{time*p};
    print("{}", space); 

    return 0;
}