/*
 * ﴾ وَمَا يُلَقَّاهَا إِلَّا الَّذِينَ صَبَرُوا وَمَا يُلَقَّاهَا إِلَّا ذُو حَظٍّ عَظِيمٍ ﴿
 * 
 * A silent promise to the future self.
 */

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

bool chk[101][101];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ll n;   cin >> n;
    ll l, r;    cin >> l >> r;
    vector<ll> v(n+1);
    vector<ll> prf(n+1, 0);

    for(ll x{1}; x<=n; x++)
    {
        cin >> v[x];
        prf[x]=prf[x-1]+v[x];
    }

    vector<ll> minl(n+1);
    ll crnt{};
    minl[0]=0;

    for(ll x{1}; x<=n; x++)
    {
        ll val{(ll)x*l-prf[x]};
        crnt=min(crnt, val);
        minl[x]=crnt;
    }
// third sub
    ll mint{2000000000000000000};

    for(ll y{}; y<=n; y++)
    {
        ll len{n-y};
        ll left{minl[len]+prf[len]};
        ll right{(ll)y*r};
        ll tot{left+right};
        mint=min(mint, tot);
    }

    cout << mint;
}