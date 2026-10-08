/**
 * author:  Zeidan
 * created: 05.09.2025 21:10:49
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll A, B, C;     cin >> A >> B >> C;

    bool case1(A==B);
    bool case2(A>B);
    bool case3(A<B);

    if(case1)
        if(C==0)
            cout << "Aoki";
        else
            cout << "Takahashi";
    else if(case2)
        cout << "Takahashi";
    else
        cout << "Aoki";


    return 0;
}