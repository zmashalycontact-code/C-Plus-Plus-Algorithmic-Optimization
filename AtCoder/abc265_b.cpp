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

    ll n, m, t;    cin >> n >> m >> t;

    vector<ll> v(n);

    for(ll x{1}; x<n; x++)
        cin >> v[x];
    
    map<ll, ll> bns;
    for(ll x{}; x<m; x++)
    {
        ll idx, tb;  cin >> idx >> tb;
        bns[idx]=tb;
    }

    for(ll x{1}; x<n; x++)
    {
        if(t<=v[x])
        {
            cout << "No";
            return 0;
        }
        t-=v[x];
        if(bns.count(x+1))
            t+=bns[x+1];
    }

    cout << "Yes";
}