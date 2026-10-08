/**
 * author:  Zeidan
 * created: 05.09.2025 18:50:27
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    string s;  cin >> s;

    
    bool case11(s[0]=='R' && s[1]!='R');
    bool case12(s[0]!='R' && s[1]=='R' && s[2]!='R');
    bool case13(s[0]!='R' && s[1]!='R' && s[2]=='R');
    bool case21(s[1]=='R' && s[0]!=s[1] && s[1]==s[2]);
    bool case22(s[0]=='R' && s[0]==s[1] && s[1]!=s[2]);
    bool case3(s[0]=='R' && s[0]==s[1] && s[1]==s[2]);

    if(case11 || case12 || case13)
        cout << 1;
    else if(case21 || case22)
        cout << 2;
    else if(case3)
        cout << 3;
    else
        cout << 0;

    return 0;
}