/**
 * author:  Zeidan
 * created: 08.10.2025 09:33:16
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 998244353;
const ll SIZE{10001};
ll arr1[SIZE]{};
ll arr2[SIZE]{};
// ll arr[SIZE][SIZE]{};
ll frq[SIZE]{};
ll chng[SIZE]{};
ll idx[SIZE]{};

// ll sum(ll n)
// {
//     ll s1{n%mod};
//     ll s2{(n+1)%mod};
//     ll res{(s1*s2)%mod};

//     if(res%2!=0)
//         res+=mod;
//     res/=2;

//     return res;
// }

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    ll t;   cin >> t;
    while(t--)
    {
        ll x, y, n;     cin >> x >>y >> n;
        arr1[n-1]=y;

        ll diff{1};
        for(ll x{n-2}; x>=1; x--)
        {
            arr1[x]=arr1[x+1]-diff;
            diff++;
        }

        arr1[0]=x;
        if(arr1[1]-arr1[0]>arr1[2]-arr1[1])
        {
            for(ll x{}; x<n; x++)
                cout << arr1[x] << (x==n-1 ? "":" ");
            cout << '\n';
        }
        else
            cout << -1 << '\n';
    }
}