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

    ll t;   cin >> t;

    while(t--)
    {
        ll n, d;   cin >> n >> d;

        for(ll i{}; i<n; i++)
            cin >> arr1[i];

        sort(arr1, arr1+n);

        if(arr1[n-1]<=d)
            cout << "Yes\n";
        else
            if(arr1[0]+arr1[1]<=d)
                cout << "YES\n";
            else
                cout << "NO\n";
    }
}