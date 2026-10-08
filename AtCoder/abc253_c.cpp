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


int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
// third
    ll q;   cin >> q;
    map<ll, ll> mp;
    while(q--)
    {
        ll type;    cin >> type;
        
        if(type==1)
        {
            ll x;   cin >> x;
            mp[x]++;
        }
        else if(type==2)
        {
            ll x, c;    cin >> x >> c;
            ll mn=min(mp[x], c);
            mp[x]-=mn;
            if(mp[x]==0)
                mp.erase(x);
        }
        else
        {
            ll mn=mp.begin()->first;
            ll mx=mp.rbegin()->first;
            cout << mx-mn << '\n';
        }
    }
        
}