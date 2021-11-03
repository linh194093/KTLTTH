vector<int> dijkstra(const vector< vector< pair<int, int> > >&adj) {
    priority_queue< pair<int, int> > q;
    vector<int> dis((int)adj.size(), (int)1000000000);
    q.push({0, 0});
    dis[0] = 0;

    while (!q.empty()) {

        
        int u = q.top().second;
        if (-q.top().first != dis[u]) {
            q.pop();
            continue;
        }
        q.pop();

        for (auto e : adj[u]) {
            int m = e.first, n = e.second;
            if (dis[m] > dis[u] + n) {
                dis[m] = dis[u] + n;
                q.push({-dis[m], m});
            }
        }
    }

    return dis;

}