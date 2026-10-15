class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        for(auto it : intervals){
            if(res.empty()){
                res.push_back(it);
                continue;
            }
            auto &bc=res.back();
           // cout<<bc[0]<<" * "<<bc[1]<<endl;
            if(bc[1]>=it[0]){
              //  cout<<bc[1]<<" - "<<it[1]<<endl;
                bc[1]=max(it[1],bc[1]);
              //   cout<<bc[1]<<" -- "<<it[1]<<endl;
            }else{
                res.push_back(it);
            }
        }
        return res;
    }
};
