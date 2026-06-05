class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int res=-1e9,suff=1, prep=1;
for(int i=0; i<n; i++){
    if(prep==0){
     prep=1;
    }
    if(suff==0){
        suff=1;
    }
    prep=nums[i]*prep;
    suff=nums[n-i-1]*suff;
    res=max(res, max(prep, suff));
}
    return res;
    }
};
