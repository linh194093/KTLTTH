#include <bits/stdc++.h>
using namespace std;
#define ll long long

void duyet(ll &ans, priority_queue<pair<ll, ll>> p, int s){
    while (true)
    {
        pair<ll, ll > v = p.top();
        p.pop();
        if (!(v.second % v.first))
        {
            if (s - (v.second / v.first) > 0)    s -= (v.second / v.first);
            else
            {
                p.push(make_pair(v.first, v.second - s * v.first));
                break;
            }
        }
        else
        {
            if (s - (v.second / v.first) > 0)
            {
                p.push(make_pair(v.second % v.first, v.second % v.first));
                s -= (v.second / v.first);

            }
            else
            {
                p.push(make_pair(v.first, v.second - s * v.first));
                break;
            }
        }
        if (p.empty())   break;
    }

    while (!p.empty())
    {
        ans += p.top().second;
        p.pop();
    }
}

int main()
{   
    // cout << " Nguyen Van Linh 20194093" << endl;
    int n, s;
    priority_queue<pair<ll, ll>> queue;
    cin >> n >> s;
    ll ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ll u, v;
        cin >> u >> v;
        queue.push(make_pair(v, u));
    }
    duyet(ans, queue, s);
    cout << ans;
    return 0;
}