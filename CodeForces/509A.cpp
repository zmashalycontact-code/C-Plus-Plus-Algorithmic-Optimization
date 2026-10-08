/**
 * author:  Zeidan
 * created: 06.09.2025 23:24:43
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n;   cin >> n;
    ll arr[11][11];

    for(ll x{}; x<n; x++)
    {
        arr[x][0]=1;
        arr[0][x]=1;
    }

    for(ll x{1}; x<n; x++)
        for(ll y{1}; y<n; y++)
            arr[x][y]=arr[x-1][y]+arr[x][y-1];

    println("{}", arr[n-1][n-1]);

    return 0;
}