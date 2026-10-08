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
    
    ll n;  cin >> n;
    vector<pair<string, ll>> v(n);
    for(ll x{}; x<n; x++)
    {
        cin >> v[x].first;
        v[x].second=x;
    }

    sort(v.begin(), v.end());

    vector<string> res(n);
    ll cntr{};
    for(ll x{}; x<n; x++) 
    {
        if(x>0 && v[x].first==v[x-1].first)
            cntr++;
        else
            cntr=0;
        if(cntr==0)
            res[v[x].second]=v[x].first; 
        else
            res[v[x].second]=v[x].first+"("+to_string(cntr)+")";
    }

    pv(res);
    
    
}