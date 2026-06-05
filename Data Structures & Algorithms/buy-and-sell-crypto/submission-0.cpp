class Solution {
public:
    int maxProfit(vector<int>& pric) {
        int mxi=1e9;
        int res=0,n=pric.size();
        for(int i=0; i<n; i++){
          mxi=min(mxi, pric[i]);
          res=max(res, pric[i]-mxi);
        }
        return res;
    }
};
