#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const ll SIZE{200005};
#define sz(x) (int)(x).size()
#define pv(v) copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "))
// #define cv(v) copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(v))
#define cv(v) for(auto &x : v) cin >> x

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    ll n;   cin >> n;

    set<string> s1;
    set<ll> s2;
    vector<pair<string, ll>> v(n);

    ll mx{-1}, indx{};
    for(ll x{}; x<n; x++)
    {
        cin >> v[x].first >> v[x].second;
        if(!s1.count(v[x].first))
        {
            // mx=max(mx, v[x].second);
            if(v[x].second>mx)
            {
                indx=x+1;
                mx=v[x].second;
            }
        }
        s1.insert(v[x].first);
        s2.insert(v[x].second);
    }

    cout << indx;


    
}