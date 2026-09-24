class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int st=nums[0];
        for(int i=1; i<n; i++){
            st=st^nums[i];
        }
        return st;
    }
};
