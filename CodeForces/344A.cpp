/**
 * author:  Zeidan
 * created: 06.09.2025 21:06:01
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll t;   cin >> t;
    ll n1;  cin >> n1;
    ll cntr{1};
    t--;
    while(t--)
    {

        ll n;   cin >> n;
        bool chk(n1!=n);
        if(chk)
            cntr++;
        n1=n;

    }

    println("{}", cntr);

    return 0;
}