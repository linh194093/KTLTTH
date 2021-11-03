#include <bits/stdc++.h>
#define maxn 1000000
#define ll long long
using namespace std;

ll n, C[5 * maxn + 1], S[maxn];

void duyetS(string s){
    S[0] = 0;
    int i;
    for(i = 0; i <= 5 * maxn; ++i)    C[i] = 0;
    for(i = 1; i < n; i++)   S[i] = S[i - 1] + s[i] - '0';
    for(i = 1; i < n; ++i)   S[i] = S[i]*2 - i;
}

inline void put(){
    C[S[n - 1] + maxn]++;
    ll ans = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        ans += C[S[i] + maxn];
        C[S[i] + maxn]++;
    }
    cout << ans;
}
int main()
{   
    // cout << "Nguyen Van Linh 20194093" << endl;
    string s;
    cin >> s;
    s = " " + s;
    n = s.size();
    duyetS(s);
    put();
    return 0;

}
