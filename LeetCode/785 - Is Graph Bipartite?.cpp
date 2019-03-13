class Solution {
public:
    vector<int> color;
    vector<bool> used;
    
    bool bfs(int start, vector<vector<int>>& graph) {
        queue<int> q;
        
        q.push(start);
        color[start] = 1;
        used[start] = true;
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            
            for (int i = 0; i < graph[cur].size(); i++) {
                int x = graph[cur][i];
                if (color[x] == -1)
                    color[x] = color[cur] == 1 ? 2 : 1;
                else {
                    if (color[cur] == color[x])
                        return false;
                }
                if (used[x])
                    continue;
                used[x] = true;
                q.push(x);
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        color = vector<int> (graph.size(), -1);
        used = vector<bool> (graph.size(), false);
        
        for (int i = 0; i < graph.size(); i++) {
            if (!used[i])
                if (!bfs(i, graph))
                    return false;
        }
        return true;
    }
};