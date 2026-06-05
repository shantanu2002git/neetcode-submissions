class Solution {
public:
    vector<int> plusOne(vector<int>& dig) {
        int n=dig.size();
int  vl=1;;
vector<int>res;
        for(int i=n-1; i>=0; i--){
           
            int sm=dig[i]+vl;
            dig[i]=sm%10;
            res.push_back(dig[i]);
            vl=sm/10;
        }
        if(vl){res.push_back(vl);}
        reverse(res.begin(), res.end());
        return res;
    }
};
