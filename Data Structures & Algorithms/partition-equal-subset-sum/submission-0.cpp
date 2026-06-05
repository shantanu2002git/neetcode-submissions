class Solution {
public:
bool call(int idx, int n, int sum, vector<int>nums,vector<vector<int>>&dp){
    if(idx>=n){
return false;
    }
    if(sum==0){
return true;
    }
    int tt=0, nn=0;
    if(nums[idx]<=sum){
        tt=call(idx+1, n, sum-nums[idx],nums,dp);
    }
    nn=call(idx+1, n, sum, nums, dp);
    return tt ||nn;
}
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(), nums.end(),0);
        if(sum%2!=0) return false;
        sum=sum/2;
        vector<vector<int>>dp(n,vector<int>(sum,-1));
        return call(0,n,sum,nums, dp);
    }
};
