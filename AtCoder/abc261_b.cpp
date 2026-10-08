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
    
    ll n;   cin >> n;

    vector<string> v(n); cv(v);

    for(ll x{}; x<n; x++)
        for(ll y{}; y<n; y++)
        {
            if(x==y)continue;
            if(v[x][y]=='W' && v[y][x]!='L')
            {
                cout << "incorrect";
                return 0;
            }
            if(v[x][y]=='L' && v[y][x]!='W')
            {
                cout << "incorrect";
                return 0;
            }
            if(v[x][y]=='D' && v[y][x]!='D')
            {
                cout << "incorrect";
                return 0;
            }
        }

        cout << "correct";
    
    
}