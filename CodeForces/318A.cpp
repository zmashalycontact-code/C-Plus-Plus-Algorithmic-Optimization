/**
 * author:  Zeidan
 * created: 05.09.2025 22:09:57
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n, k;    cin >> n >> k;
    ll sumd{(n+1)/2};

    bool chk(k<=sumd);
    ll epos{k-sumd};
    if(chk)
        cout << 2*k-1;
    else
        cout << 2*epos;


    return 0;
}