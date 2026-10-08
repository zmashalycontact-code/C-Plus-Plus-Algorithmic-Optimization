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
ll pre[SIZE]{};


int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    bool chk(true);
    ll n;   cin >> n;

    for(ll x{}; x<n; x++)
    {
        cin >> arr1[x];
        arr2[x]=arr1[x];
    }

    sort(arr1, arr1+n);

    for(ll x{}; x<n; x++)
        if(arr1[x]!=arr2[x])
            chk=false;

    if(chk)
        cout << "YES";
    else
        cout << "NO";

// y3m b5a

}