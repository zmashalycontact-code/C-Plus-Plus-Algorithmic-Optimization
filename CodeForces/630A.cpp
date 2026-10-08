/**
 * author:  Zeidan
 * created: 24.10.2025 21:55:41
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const ll SIZE{100001};
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

    ll a{5};

    ll b;   cin >> b;
    ll res{1};

    while(b>0)
    {
        if(b%2==1)
            res=(a*a)%100;
        a=(a*a)%100;
        b/=2;
    }

    cout << res;

}
