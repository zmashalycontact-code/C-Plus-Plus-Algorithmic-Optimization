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

ll g[1000001];
ll prefix[10][1000001];

ll f(ll n) 
{
    ll res{1};
    while(n>0) 
    {
        if(n%10 != 0)
            res *= (n%10);
        n/=10;
    }
    return res;
}

void precompute() 
{
    for(ll i{1}; i<=1000000; i++)
        if(i<10)
            g[i]=i;
        else
            g[i]=g[f(i)];
    
    
    for(ll k{1}; k<=9; k++) 
        for(ll i{1}; i<=1000000; i++) 
        {
            prefix[k][i]=prefix[k][i-1];
            if(g[i]==k)
                prefix[k][i]++;
        }
    
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    
    precompute();
    
    ll q;   cin >> q;
    
    while(q--) {
        ll l, r, k;     cin >> l >> r >> k;
        cout << prefix[k][r] - prefix[k][l-1] << "\n";
    }

}