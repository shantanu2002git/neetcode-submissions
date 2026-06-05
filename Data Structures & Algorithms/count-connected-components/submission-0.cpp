class Solution {
public:
    void dfs(int node, vector<vector<int>>& edges, vector<int>& vis) {
        if(vis[node]) return;
        vis[node] = 1;

        for(int nei : edges[node]){
            if(!vis[nei]){
                dfs(nei, edges, vis);
            }
        }
    }

    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int> vis(n, 0);
        int res = 0;
vector<vector<int>> adj(n);
for(auto &e : edges){
    adj[e[0]].push_back(e[1]);
    adj[e[1]].push_back(e[0]);
}


        for(int i = 0; i < n; i++){
            if(!vis[i]){
                res++;
                dfs(i, adj, vis);
            }
        }
        return res;
    }
};
