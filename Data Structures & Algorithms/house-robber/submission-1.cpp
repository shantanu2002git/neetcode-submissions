class Solution {
public:
int call(int i,int n, vector<int>&nums, vector<int>&dp){
    if(i>=n){
      return 0;
    }
if(dp[i]!=-1){
    return dp[i];
}
    int tt=0, nn=0;

    tt=nums[i]+call(i+2,n,nums,dp);
    nn=call(i+1,n, nums,dp);

    return dp[i]=max(tt,nn);

}
    int rob(vector<int>& nums) {
        int res=-1,n=nums.size();
        vector<int>dp(n+1,-1);
return call(0,n,nums,dp);
    }
};
