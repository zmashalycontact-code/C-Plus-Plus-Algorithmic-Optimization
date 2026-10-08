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

ll fact(ll n)
{
    if(n<=1)
        return 1;
    ll res{1};
    for(ll x{2}; x<=n; x++)
        res*=x;
    return res;

}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n1, n2;  cin >> n1 >> n2;
    ll mn{min(n1, n2)};
    cout << fact(mn) << '\n';

}