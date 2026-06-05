class Solution {
public:
int call(vector<int>&nums, int idx, int n){
    if(idx==n){
       return 0;
    }
    int jmp=1e9;
    for(int i=nums[idx]; i>0; i--){
        if(idx+i<=n){
               jmp=min(jmp, 1+call(nums,idx+i,n));
        }
    }
    return jmp;
}
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        return call(nums, 0, n-1)!=1e9;
    }
};
