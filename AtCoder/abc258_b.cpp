#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const ll SIZE{200005};
#define sz(x) (int)(x).size()


int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    // implement

    ll n;   cin >> n;
    vector<string>v(n);    


    for(ll x{}; x<n; x++)
            cin >> v[x];
    
    ll mx{},mxr{};
    for(ll x{}; x<n; x++)
        for(ll y{}; y<n; y++)
        {
            ll num=v[x][y]-'0';
            mx=max(num,mx);
        }
    ll x{},y{},cntr{1};
    for(ll x{}; x<n; x++)
        for(ll y{}; y<n; y++)
        {
            ll num=v[x][y]-'0';
            if(num==mx)
            {
                ll dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
                ll dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
                for(ll z{}; z<8; z++)
                {
                    ll res{};
                    for(ll cntr{}; cntr<n; cntr++)
                    {
                        ll nx{(x+dx[z]*cntr%n+n)%n};
                        ll ny{(y+dy[z]*cntr%n+n)%n};
                        res=res*10+(v[nx][ny]-'0');
                    }
                    mxr = max(mxr, res);
                }
                // cout << mx;
                // for(ll x{}; x<n-1; x++)
                // {
                //     cout << v[(x+cntr)%n][(y+cntr)%n];
                //     cntr++;
                // }

            }
        }
    cout << mxr;
    
}