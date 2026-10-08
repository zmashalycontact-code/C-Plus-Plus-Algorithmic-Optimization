/**
 * author:  Zeidan
 * created: 19.09.2025 15:09:18
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
    
int main()
{
    string s1,s2;     cin >> s1 >> s2;
    // if(s1.size()!=s2.size())
    // {
    //     cout << "NO";
    //     return 0;
    // }
    reverse(s2.begin(), s2.end());
    if(s1==s2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }



}