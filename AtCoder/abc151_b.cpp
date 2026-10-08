/**
 * author:  Zeidan
 * created: 16.11.2025 00:15:11
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const ll SIZE{600};
ll arr1[SIZE]{};
ll arr2[SIZE]{};
ll arr3[SIZE]{};
ll arr4[300][300]{};
string ss[300]{};
char s[SIZE][SIZE]{};
ll frq[SIZE]{};
ll chng[SIZE]{};
ll idx[SIZE]{};
ll pre[SIZE]{};

   

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n, k, m;     cin >> n >> k >> m;
    ll sum{}; //, cntr1{}; cntr2{};
    for(ll x{}; x<n-1; x++)
    {
        cin >>arr1[x];
        sum+=arr1[x];
    }


    ll res{(n*m)-sum};

    if(res>k)
        cout << -1;
    else
        cout << max(res, 0LL);

}