class KthLargest {
public:
priority_queue<int,vector<int>, greater<int>>pq;
int p;
    KthLargest(int k, vector<int>& nums) {
        p=k;
        for(auto it : nums){
            pq.push(it);
            if(pq.size()>k){
                pq.pop();
            }
        }
        // return pq.top();
    }
    
    int add(int it) {
         pq.push(it);
            if(pq.size()>p){
                pq.pop();
            }
            return pq.top();
    }
};
