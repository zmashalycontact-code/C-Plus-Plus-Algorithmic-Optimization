/**
 * author:  Zeidan
 * created: 06.09.2025 20:14:27
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n;     cin >> n;
    ll arr[1000];

    for(ll x{}; x<n-1; x++)
        cin >> arr[x];

    ll a, b;    cin >> a >> b;
    ll sum{};

    for(ll x{a-1}; x<b-1; x++)
    {
        sum+=arr[x];
    }

    print("{}", sum);

    return 0;
}