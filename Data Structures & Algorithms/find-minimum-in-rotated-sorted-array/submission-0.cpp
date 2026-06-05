class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int l=0,h=n-1,res;
        while(l<h){
            int md=(l+h)/2;
            if(nums[md]>nums[h]){
                
                l=md+1; 
            }else{
                h=md;
            }
        }
        return nums[l];
    }
};
