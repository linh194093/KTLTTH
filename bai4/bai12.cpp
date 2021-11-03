#include <bits/stdc++.h>
#define maxn 1000100
using namespace std;
#define ll long long

ll n, s, h[maxn], L[maxn], R[maxn];
priority_queue<pair<ll, ll>> p;
stack<int> S;

void duyet(){
    for (int i = 0; i < n; ++i)
    {
        while (!S.empty() && h[i] <= h[S.top()])    S.pop();
        if (S.empty())    L[i] = -1;
        else    L[i] = S.top();
        
        S.push(i);
    }

    R[n - 1] = n;
    S.push(n - 1);
    for (int i = n - 2; i >= 0; --i)
    {
        while (!S.empty() && h[i] <= h[S.top()])      S.pop();
        if (S.empty())       R[i] = n;
        else    R[i] = S.top();
        S.push(i);
    }
}

inline void put(){
    ll ans = 0;
    for (int i = 0; i < n; i++) ans = max(ans, (R[i] - L[i] - 1) * h[i]);

    cout << ans;
}

int main()
{
    // cout << "Nguyen Van Linh 20194093" << endl;
    cin >> n;
    for (int i = 0; i < n; ++i)    cin >> h[i];
    duyet();
    put();
    return 0;
    
}