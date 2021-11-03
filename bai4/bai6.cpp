void bfs(vector< list<int> > adj) {
    queue<int> Q;
    vector<bool> visited(adj.size());
    Q.push(1); // Bắt đầu từ đỉnh số 1
    visited.at(1) = true;
    while(!Q.empty()){
        int i = Q.front();
        cout << i << endl;
        Q.pop();
        for (list<int>::iterator it=adj[i].begin(); it != adj[i].end(); ++it)
            if(!visited.at(*it)){
                visited.at(*it) = true;
                Q.push(*it);
            }
    }   
    /*****************
    # YOUR CODE HERE #
    *****************/
}