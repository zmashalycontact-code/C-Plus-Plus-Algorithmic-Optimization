/**
 * author:  Zeidan
 * created: 08.10.2025 09:33:16
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const ll SIZE{100001};
ll arr1[SIZE]{};
ll arr2[SIZE]{};
// ll arr[SIZE][SIZE]{};
ll frq[SIZE]{};
ll chng[SIZE]{};
ll idx[SIZE]{};


int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n;   cin >> n;

    for(ll x{}; x<n; x++)
        cin >> arr1[x];

    for(ll x{}; x<n; x++)
        cin >> arr2[x];

    ll sum{};
    for(ll x{}; x<n; x++)
        sum+=arr1[x]*arr2[x];

    if(sum==0)
        cout << "Yes\n";
    else
        cout << "No\n";


}