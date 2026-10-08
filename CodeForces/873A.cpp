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
    ll size;    cin >> size;
    ll k, x;    cin >> k >> x;

    for(ll x{}; x<size; x++)
        cin >> arr[x];

    sort(arr, arr+size);

    ll hnlf_l7d{size-k};

    ll sum{};
    for(ll x{}; x<hnlf_l7d; x++)
    {
        sum+=arr[x];
    }

    cout << sum+(k*x);
}