void dfs(vector< list<int> > adj) {
    stack<int> S;
    vector<bool> visited(adj.size());

    S.push(1);
    visited[1] = true;
    cout << 1 << endl;

    while (!S.empty()) {
        if (!adj[S.top()].empty()) {
            if (!visited[adj.at(S.top()).front()]) {
                int k = S.top();
                int temp = adj[S.top()].front();
                
                visited[temp] = true;
                S.push(temp);
                cout << temp << endl;
                adj[k].pop_front();
                continue;
            }
            else adj[S.top()].pop_front();
        }
        else    S.pop();
    }
    
}
