class Solution {
public:
int call(int idx, int n, int prv, vector<int>&nums,  vector<vector<int>>&dp){
    if(idx>=n){
return 0;
    }
if(dp[idx][prv+1]!=-1){
    return dp[idx][prv+1];
}
    int tt=0, nn=0;
    if(prv==-1 || nums[prv]<nums[idx]){
        return dp[idx][prv+1]=max(1+call(idx+1,n, idx, nums, dp),call(idx+1,n,prv,nums,dp)) ;
    }else{
       return dp[idx][prv+1]=call(idx+1,n,prv,nums,dp);
    }
    
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size(), prev=-1;
        vector<vector<int>>dp(n, vector<int>(n+1 , -1));
        return call(0, n, prev, nums, dp);
        
    }
};
