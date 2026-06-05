class Solution {
public:
int rob(int st, int en, vector<int>&nums){
     int prv1=nums[st], prv2=max(nums[st], nums[st+1]);
     for(int i=st+2; i<=en; i++){
        int res=max(nums[i]+prv1, prv2);
        prv1=prv2;
        prv2=res;
     }
     return prv2;
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        /*
        This is circale...
        */

        return max(rob(0,n-2, nums), rob(1, n-1, nums));
    }
};
