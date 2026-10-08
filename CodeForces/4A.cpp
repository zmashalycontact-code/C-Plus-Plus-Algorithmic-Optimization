/**
 * author:  Zeidan
 * created: 05.09.2025 17:13:59
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n;   cin >> n;
    bool spc(n==2 || n%2!=0);
    bool chk(n%2==0);

    if(spc)
        print("NO");
    else
        print("YES");
    

    return 0;
}