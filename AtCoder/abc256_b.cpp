// #pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const ll SIZE{200005};
ll arr1[4];
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
    
    ll n;   cin >> n;
    
    ll p{};

    for(ll x{}; x<n; x++)
    {
        ll a;   cin >> a;
        arr1[0]=1;
        for(ll x{3}; x>=0; x--)
        {
            if(arr1[x]==1)
            {
                ll newp=x+a;
                if(newp>=4)p++;
                else arr1[newp]=1;
                arr1[x]=0;
            }
        }
    }

    cout << p;


}