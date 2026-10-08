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
    ll n, m;   cin >> n >> m;

    ll sum1{}, diff[1000000];

    for(ll x{}; x<n; x++)
    {
        ll a, b;    cin >> a >> b;
        sum1+=a;
        diff[x]=a-b;
    }

    sort(diff, diff+n);

    ll sum2{sum1};

    if(sum2<=m)
    {
        cout << 0 << '\n';
        return 0;
    }

    ll cntr{};
    for(ll x{n-1}; x>=0; x--)
    {
        sum2-=diff[x];
        cntr++;
        if(sum2<=m)
        {
            cout << cntr << '\n';
            return 0;
        }
    }

    cout << -1 << '\n';

}