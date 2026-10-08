// #pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const ll SIZE{200005};
ll arr1[SIZE];
ll arr2[SIZE];
// string arr3[SIZE];
ll prfx[SIZE];
// string frq[SIZE];


int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    ll n, k, q; cin >> n >> k >> q;

    for(ll x{1}; x<=k; x++)
        cin >> arr1[x];

    for(ll x{}; x<q; x++)
    {
        ll num;   cin >> num;

        if(arr1[num]==n) continue;

        if(num<k && arr1[num]+1==arr1[num+1]) continue;
        
            arr1[num]++;
    }

    for(ll x{1}; x<=k; x++)
        cout << arr1[x] << " ";

}