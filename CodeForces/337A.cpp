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
    ll arr[1000];
    ll n, m;    cin >> n >> m;

    for(ll x{}; x<m; x++)
        cin >> arr[x];

    sort(arr, arr+m);
    ll min{10000};

    for(ll x{}; x<=m-n; x++)
    {
        ll diff{arr[x+n-1]-arr[x]};
        if(diff<min)
            min=diff;
    }

    cout << min << '\n';
}