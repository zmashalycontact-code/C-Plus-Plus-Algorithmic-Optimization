#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const ll SIZE{200005};
#define sz(x) (int)(x).size()
#define pv(v) copy(v.begin(), v.end(), ostream_iterator<string>(cout, "\n"))
// #define cv(v) copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(v))
#define cv(v) for(auto &x : v) cin >> x


int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    ll n, x, y, z;  cin >> n >> x >> y >> z;
    vector<ll> math(n), eng(n), tot(n);
    cv(math); cv(eng);

    for(ll x{}; x<n; x++)
        tot[x]=math[x]+eng[x];

    vector<bool> adm(n, false);

    for(ll i{}; i<x; i++)
    {
        ll mx{-1}, id{-1};
        for(ll j{}; j<n; j++)
            if(!adm[j] && math[j]>mx)
            {
                mx=math[j];
                id=j;
            }

        if(id!=-1) adm[id]=true;
    }

    for(ll i{}; i<y; i++)
    {
        ll mx{-1}, id{-1};
        for(ll j{}; j<n; j++)
            if(!adm[j] && eng[j]>mx)
            {
                mx=eng[j];
                id=j;
            }

        if(id!=-1) adm[id]=true;
    }

    for(ll i{}; i<z; i++)
    {
        ll mx{-1}, id{-1};
        for(ll j{}; j<n; j++)
            if(!adm[j] && tot[j]>mx)
            {
                mx=tot[j];
                id=j;
            }

        if(id!=-1) adm[id]=true;
    }

    for(ll i{}; i<n; i++)
        if(adm[i])
            cout << i+1 << '\n';
    
    
}