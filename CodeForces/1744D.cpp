/**
 * author:  Zeidan
 * created: 08.10.2025 09:33:16
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 998244353;
const ll SIZE{200001};
ll arr1[SIZE]{};
ll arr2[SIZE]{};
// ll arr[SIZE][SIZE]{};
ll frq[SIZE]{};
ll chng[SIZE]{};
ll idx[SIZE]{};


int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    
    ll t;   cin >> t;
    while(t--) 
    {
        ll n;   cin >> n;
        
        ll sum{};
        for (ll i{1}; i<=n; ++i)
        {
            ll x;   cin >> x;
            while (x%2==0)
            {
                sum++;
                x/=2;
            }
            arr1[i]={};
            ll temp_i{i};
            while (temp_i%2==0)
            {
                arr1[i]++;
                temp_i/=2;
            }
        }
        
        sort(arr1+1, arr1+n+1);
        
        ll steps{};
        for (ll i{n}; i>=1 && sum<n; --i)
        {
            sum+=arr1[i];
            steps++;
        }
        
        if (sum<n)
            cout << -1 << '\n';
        else
            cout << steps << '\n';
    }


}