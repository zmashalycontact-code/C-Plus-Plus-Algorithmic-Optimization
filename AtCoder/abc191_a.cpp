/**
 * author:  Zeidan
 * created: 05.09.2025 21:42:43
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    double v, t, s, d;     cin >> v >> t >> s >> d;
    double arrv{d/v};

    bool chk(arrv>=t && arrv<=s);

    if(chk)
        cout << "No";
    else
        cout << "Yes";

    return 0;
}