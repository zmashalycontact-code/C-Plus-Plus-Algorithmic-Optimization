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

ll sum(ll n)
{
    ll s1{n%mod};
    ll s2{(n+1)%mod};
    ll res{(s1*s2)%mod};

    if(res%2!=0)
        res+=mod;
    res/=2;

    return res;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n1, n2, n3;     cin >> n1 >> n2 >> n3;

    ll sum1{sum(n1)};
    ll sum2{sum(n2)};
    ll sum3{sum(n3)};

    ll res{(sum1*sum2)%mod};
    res=(res*sum3)%mod;

    cout << res;
}