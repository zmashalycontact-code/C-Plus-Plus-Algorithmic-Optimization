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


ll n, m;

vector<pair<ll, ll>> v;

bool chk(ll x)
{
    ll badpairs{};
    vector<ll> cntr(n+2);

    for(ll x1{}; x1<v.size(); x1++)
    {
        if(v[x1].first==x || v[x1].second==x)
            continue;
        badpairs++;
        cntr[v[x1].first]++;
        cntr[v[x1].second]++;
    }   

    for(ll x1{}; x1<=n; x1++)
        if(cntr[x1]==badpairs)
            return true;
    return false;

}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    ll n, a, b; cin >> n >> a >> b;
    ll tot{n*(n+1)/2};
    ll num1{n/a}, eq1{a*(num1*(num1+1)/2)};
    ll num2{n/b}, eq2{b*(num2*(num2+1)/2)};
    ll rep{lcm(a,b)};
    ll num3{n/rep}, eq3{rep*(num3*(num3+1)/2)};
    cout << tot-(eq1+eq2-eq3);
    
    
}