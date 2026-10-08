/**
 * author:  Zeidan
 * created: 10.10.2025 15:05:37
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

    ll n, x;    cin >> n >> x;
    ll num{};
    for(ll i{}; i<n; i++)
    {
        cin >> num;
        if(num!=x)
            cout << num << (i<n-1 ? " ":"");
    }

}