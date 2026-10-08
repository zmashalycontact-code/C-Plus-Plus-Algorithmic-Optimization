/**
 * author:  Zeidan
 * created: 19.09.2025 15:24:40
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
    
int main()
{
    string s;   cin >> s;
    
    for(ll x{}; x<s.size(); x++)
    {
        ll digit{s[x]-'0'};
        ll tsgheer{9-digit};

        if(x==0 && digit==9)
            continue;

        if(tsgheer<digit)
            s[x]=tsgheer+'0';
    }

    cout << s << '\n';
}