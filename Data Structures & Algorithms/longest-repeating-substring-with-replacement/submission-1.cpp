class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mps;
        int n=s.size(),res=0, l=0,mxl=0;
      for(int r=0; r<n; r++){
        mps[s[r]]++;
        mxl=max(mxl, mps[s[r]]);

        while(((r-l+1)-mxl)>k){
            mps[s[l]]--;
            l++;
        }
        res=max(res, (r-l+1));
      }
      return res;
    }
};
