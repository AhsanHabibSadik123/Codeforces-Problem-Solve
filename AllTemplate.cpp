vector<vector<int> >adj;
vector<bool> vis;
vector<int>level;

void bfs(int source){
    queue<int>que;
    que.push(source);
    vis[source] = true;
    while(!que.empty()){
        int parent = que.front();
        que.pop();
        for(auto child : adj[parent]){
            if(!vis[child]){
                que.push(child);
                vis[child] = true;
                level[child] = level[parent] + 1;
            }
        }
    }
}