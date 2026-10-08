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

bool chk[501][501];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    ll n, p, q, r;  cin >> n >> p >> q >> r;
    set<ll> prf;
    ll crnt{};
    prf.insert(crnt);

    for (ll x{}; x<n; x++)
    {
        long long xx;   cin >> xx;
        crnt+=xx;
        prf.insert(crnt);
    }

    for(auto it:prf)
        if(prf.count(it+p) && prf.count(it+p+q) && prf.count(it+p+q+r))
        {
            cout << "Yes\n";
            return 0;
        }
    cout << "No\n";
}