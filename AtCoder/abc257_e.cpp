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
    
    ll n;   cin >> n;
    ll mnc{200000000}, fc{1};
    for(ll x{1}; x<=9; x++)
    {
        cin >> arr1[x];

        if(arr1[x]<=mnc)
        {
            mnc=arr1[x];
            fc=x;
        }
    }
        ll l{n/mnc};

    if(l==0)
    {
        cout << 0;
        return 0;
    }

    ll ba2y{n%mnc};

    string res{""};

    for(ll x{}; x<l; x++)
        res+=to_string(fc);
    
    for(ll x{}; x<l; x++)
        for(ll y{9}; y>=fc; y--)
            if(ba2y+mnc>=arr1[y])
            {
                res[x]='0'+y;
                ba2y-=(arr1[y]-mnc);
                break;
            }
    
    cout << res;

    

}