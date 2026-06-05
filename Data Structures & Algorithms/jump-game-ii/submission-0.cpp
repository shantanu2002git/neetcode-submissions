class Solution {
public:
int call(int idx, int n, vector<int>&vc){
    if(idx==n || idx>n) return 0;
    int jmp=1e9;
    for(int i=vc[idx]; i>0; i--){
        if(idx+i<=n){
jmp=min(jmp,1+call(idx+i,n,vc));
        }

    }
    return jmp;
}
    int jump(vector<int>& nums) {
        int n=nums.size()-1;
       return call(0,n,nums); 
    }
};
