/**
 * author:  Zeidan
 * created: 24.10.2025 21:55:41
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const ll SIZE{300000};
ll arr1[SIZE]{};
ll arr2[SIZE]{};
ll arr3[SIZE]{};
// string arr[SIZE][SIZE]{};
ll frq[SIZE]{};
ll chng[SIZE]{};
ll idx[SIZE]{};


int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n;   cin >> n;
    ll sum{};
    for(ll i{}; i<n; i++)
    {
        cin >> arr1[i];
        sum+=arr1[i];
    }

    ll x;   cin >> x;

    ll res1{x/sum};
    ll res2{res1*n};
    ll res3{res1*sum};

    for(ll i{}; i<n; i++)
    {
        res3+=arr1[i];
        res2++;
        
        if(res3>x)
        {
            cout << res2 << '\n';
            break;
        }
    }
}