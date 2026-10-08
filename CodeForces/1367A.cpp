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

    // ll t, k;   cin >> t >> k;
    // ll cntr{};
    // while(t--)
    // {
    //     ll num;     cin >> num;
    //     bool good(true);
    //     for(ll x{}; x<=k; x++)
    //     {
    //         bool chk(false);
    //         ll temp{num};

    //         if(num==0 && x==0)
    //         {
    //             chk=true;
    //         }

    //         while(temp>0)
    //         {
    //             if(temp%10==x)
    //             {
    //                 chk=true;
    //                 break;
    //             }
    //             temp/=10;
    //         }

    //         if(!chk)
    //         {
    //             good=false;
    //             break;
    //         }
    //     }
    //     if(good)
    //         cntr++;
    // }

    // cout << cntr << '\n';
// --------------------------------
    // string s;    cin >> s;

    // bool _7rof[26]{};

    // for(ll x{}; x<s.size(); x++)
    //     if(s[x]>='a' && s[x]<='z')
    //         _7rof[s[x]-'a']=true;

    // ll cntr{};
    // for(ll x{}; x<26; x++)
    //     if( _7rof[x])
    //         cntr++;

    // cout << cntr;

// -----------------------------------
    ll t;   cin >> t;

    while(t--)
    {
        string s1;   cin >> s1;
        string s2{""};
        s2+=s1[0];

        for(ll x{1}; x<s1.size(); x+=2)
        {
            s2+=s1[x];
        }

        cout << s2 << '\n';
    }
}