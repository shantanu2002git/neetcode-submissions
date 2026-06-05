class Solution {
public:
    bool canJump(vector<int>& nums) {
        int longj=0,n=nums.size();
        for(int i=0; i<n; i++){
            if(i>longj) return false;
            longj=max(longj, i+nums[i]);
        }
        return true;
    }
};
