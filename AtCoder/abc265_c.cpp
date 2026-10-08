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

    ll h, w;    cin >> h >> w;
    vector<string> v(h);    cv(v);
    ll dr[]={-1,1,0,0};
    ll dc[]={0,0,-1,1};

    ll idx[256];
    idx['U']=0;
    idx['D']=1;
    idx['L']=2;
    idx['R']=3;

    ll r{}, c{};
    while(true)
    {
        if(chk[r][c])
        {
            cout << -1;
            return 0;
        }
        chk[r][c]=true;
        char crnt=v[r][c];
        ll nidx{idx[crnt]};
        ll nextr{r+dr[nidx]};
        ll nextc{c+dc[nidx]};

        if(nextr<0 || nextr>=h || nextc<0 || nextc>=w)
        {
            cout << r+1 << " " << c+1;
            return 0;
        }
        r=nextr;
        c=nextc;
    }
}