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

    ll t;   cin >> t;
    ll res{}, crnt{}, cpac{};
    while(t--)
    {
        ll nzzal, rkkab;    cin >> nzzal >> rkkab;
        cpac=crnt-nzzal+rkkab;
        crnt=cpac; 
        if(cpac>res)
            res=cpac;

    }

    cout << res;
        



}