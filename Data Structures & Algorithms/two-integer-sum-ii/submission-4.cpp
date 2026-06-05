class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        map<int,int>mp;
        sort(num.begin(), num.end());
        int n=num.size();
        for(int i=0; i<n; i++){
            int dif=target-num[i];
            if(mp.find(dif)!=mp.end()){
           return {mp[dif]+1, i+1};
            }
            mp[num[i]]=i;
        }
        return {-1,-1};
    }
};
