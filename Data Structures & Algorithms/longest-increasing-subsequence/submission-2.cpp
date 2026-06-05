class Solution {
public:
int call(int idx, int n, int prv, vector<int>&nums,  vector<vector<int>>&dp){
    if(idx>=n){
return 0;
    }

    int tt=0, nn=0;
    if(prv==INT_MIN || prv<nums[idx]){
        return max(1+call(idx+1,n, nums[idx], nums, dp),call(idx+1,n,prv,nums,dp)) ;
    }else{
       return call(idx+1,n,prv,nums,dp);
    }
    
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size(), prev=INT_MIN;
        vector<vector<int>>dp(n, vector<int>(n+1 , -1));
        return call(0, n, prev, nums, dp);
        
    }
};
