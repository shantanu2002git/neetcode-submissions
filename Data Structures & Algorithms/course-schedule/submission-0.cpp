class Solution {
public:
    bool canFinish(int nc, vector<vector<int>>& c) {
        int n=c.size();
        vector<vector<int>>adj(nc);
        vector<int>ind(nc,0);
        for(auto it : c){
             adj[it[0]].push_back(it[1]);
             ind[it[1]]++;
        }
        queue<int>q;
        for(int i=0; i<nc; i++){
            if(ind[i]==0){
                q.push(i);
            }
        }
int allc=0;
        while(!q.empty()){
            int tp=q.front();
            q.pop();
            allc++;
            for(auto it : adj[tp]){
                ind[it]--;

                if(ind[it]==0){
                    q.push(it);
                }
            }
        }
        return allc==nc;
    }
};
