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
    ll n;   cin >> n;
    
    string p="", q="";
    char c;
    
    for(ll i{}; i<n; i++) {
        cin >> c;
        p+=c;
    }
    for(ll i{}; i<n; i++) {
        cin >> c;
        q+=c;
    }
        
    string temp=p;
    sort(temp.begin(), temp.end());
    
    ll rankP{}, rankQ{};
    ll cnt{1};
    
    do {
        if(temp == p)
            rankP = cnt;
        if(temp == q)
            rankQ = cnt;
        cnt++;
    } while(next_permutation(temp.begin(), temp.end()));
    
    ll diff;
    if(rankP>rankQ)
        diff=rankP-rankQ;
    else
        diff=rankQ-rankP;
        
    cout << diff << "\n";
}