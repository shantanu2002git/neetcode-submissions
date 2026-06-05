class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto it  : times){
            adj[it[0]].push_back({it[1], it[2]});//(ui, vi, ti)
        }
          priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>>q;

        q.push({0,k});// time , nod
        vector<int>dis(n+1,INT_MAX);
        dis[k]=0;
        while(!q.empty()){
            auto [tim, nx]=q.top();
            q.pop();
            if(tim>dis[nx]) continue;
            for(auto it : adj[nx]){
                 if(tim+it.second < dis[it.first]){
                    dis[it.first]=tim+it.second;
                    q.push({dis[it.first],it.first});
                 }
            }
        }

        int res=0;
       for (int i = 1; i <= n; ++i) {
    if (dis[i] == INT_MAX) return -1;
    res = max(res, dis[i]);
}

return res;
    }
};
