/**
 * author:  Zeidan
 * created: 05.09.2025 19:08:30
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    string s;  cin >> s;
    if(s[0]==s[2])
        cout << "Yes";
    else
        cout << "No";

    return 0;
}