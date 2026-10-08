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


int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll t;   cin >> t;
    while(t--)
    {
        ll n;   cin >> n;
        if(n&(n-1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}