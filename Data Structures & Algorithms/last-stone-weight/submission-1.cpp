class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto it : stones){
            pq.push(it);
        }
        while(pq.size()>1){
            int tp1=pq.top(); pq.pop();
            int tp2=pq.top(); pq.pop();
           
            if(tp1!=tp2){
                pq.push(abs(tp2-tp1));
            }
        }
         return pq.empty() ? 0 : pq.top();
    }
};
