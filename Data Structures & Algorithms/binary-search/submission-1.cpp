class Solution {
public:
    int search(vector<int>& nums, int target) {
      int n=nums.size();
      int i=0,j=n;
      while(i<=j){
        int md=(i+j)/2;
        if(nums[md]==target){
            return md;
        }
        if(nums[md]>target){
            j=md-1;
        }else{
            i=md+1;
        }
      }
      return -1;  
    }
};
