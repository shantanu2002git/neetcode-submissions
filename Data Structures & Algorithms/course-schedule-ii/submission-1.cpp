class Solution {
public:
  vector<int> canFinish(int nc, vector<vector<int>>& c) {
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
vector<int>res(nc);
        while(!q.empty()){
            int tp=q.front();
            res[nc-allc-1]=tp;
            q.pop();
            allc++;
            for(auto it : adj[tp]){
                ind[it]--;

                if(ind[it]==0){
                    q.push(it);
                }
            }
        }
        // sort(res.begin(), res.end());
        return allc==nc ? res : vector<int>() ;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
       return canFinish(numCourses,prerequisites);
    }
};
