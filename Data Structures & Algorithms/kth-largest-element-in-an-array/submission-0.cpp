class Solution {
public:
priority_queue<int, vector<int>,greater<int>>pq;
    int findKthLargest(vector<int>& nums, int k) {
        for(auto it : nums){
            pq.push(it);
        }
        while(pq.size()>k){
            pq.pop();
        }
        return pq.top();
    }
};
//[2,3,1,1,5,5,4]
// [1 , 1 , 2, 3, 4 , 5, 5]