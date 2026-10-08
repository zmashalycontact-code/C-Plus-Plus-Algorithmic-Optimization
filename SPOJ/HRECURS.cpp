/**
 * author:  Zeidan
 * created: 08.10.2025 09:33:16
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const ll SIZE{10001};
ll arr1[SIZE]{};
ll arr2[SIZE]{};
// ll arr[SIZE][SIZE]{};
ll frq[SIZE]{};
ll chng[SIZE]{};
ll idx[SIZE]{};

ll slv(ll arr[], ll n, ll x)
{
    if(x==n)
        return 0;
    return arr[x]+slv(arr, n, x+1);
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll t;    cin >> t;
    ll num{};
    for(ll x{1}; x<=t; x++)
    {
        cin >> num;
        
        for(ll y{}; y<num; y++)
            cin >> arr1[y];

        cout << "Case " << x << ": " << slv(arr1, num, 0) << '\n';
    }

}