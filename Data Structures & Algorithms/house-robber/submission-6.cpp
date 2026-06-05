class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        /*
        1. one house rob the house
        2. two house rob maximum
        */
        if(n==1) return nums[0];
        int res=0;
        int prv2=nums[0], prv1=max(nums[0], nums[1]);
        for(int i=2; i<n; i++){
             res=max(nums[i]+prv2, prv1);
              prv2=prv1;
             prv1=res;
        }
        return max(res,prv1);
    }
};
