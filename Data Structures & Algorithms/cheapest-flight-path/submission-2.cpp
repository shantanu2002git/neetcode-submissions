class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& fli, int src, int dst, int k) {
  
        vector<vector<pair<int,int>>>adj(n);
        for(auto it : fli){
            adj[it[0]].push_back({it[1], it[2]}); // from -> to : price
        }
        queue<pair<int,pair<int,int>>>q; // capacity, src, price
        vector<int>dis(n+1,INT_MAX);
        q.push({0,{src,0}});
        dis[src]=0;
        while(!q.empty()){
            auto it =q.front();
            q.pop();
            int stp=it.first, src=it.second.first, pric=it.second.second;
            if(stp>k){
                continue;
            }
            for(auto i : adj[src]){
                if (pric + i.second < dis[i.first]) {
                dis[i.first] = pric + i.second;
                q.push({stp + 1, {i.first, pric + i.second}});
              }

            }
        }
        return dis[dst]==INT_MAX ? -1 : dis[dst];
    }
};
