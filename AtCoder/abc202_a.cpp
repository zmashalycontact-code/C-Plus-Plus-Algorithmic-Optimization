/**
 * author:  Zeidan
 * created: 05.09.2025 20:46:34
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll num1, num2, num3;    cin >> num1 >> num2 >> num3;

    ll res{21-(num1+num2+num3)};
    cout << res;
    return 0;
}