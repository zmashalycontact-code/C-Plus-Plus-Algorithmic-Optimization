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
    
    ll n, m;    cin >> n >> m;

    for(ll x{}; x<m; x++)
    {
        ll u,v; cin >> u >>v;
        chk[u][v]=true;
        chk[v][u]=true;
    }

    ll cntr{};

    for(ll x{}; x<=n; x++)
        for(ll y{x+1}; y<=n; y++)
            for(ll z{y+1}; z<=n; z++)
                if(chk[x][y]==true && chk[y][z]==true && chk[z][x]==true)
                    cntr++;
    
    cout << cntr;
}