class Solution {
public:
int call(int n1, int n2, string t1, string t2){
    if(n1<0 || n2 <0){
       return 0;
    }
    int tt,nn;
    if(t1[n1]==t2[n2]){
       return 1+call(n1-1, n2-1, t1,t2);
    }
    else{
        return max(call(n1-1, n2, t1,t2),call(n1,n2-1,t1,t2));
    }
}
    int longestCommonSubsequence(string t1, string t2) {
        int n1=t1.size(), n2=t2.size();
        vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));



        for(int i=n1-1; i>=0; i--){
            for(int j=n2-1; j>=0; j--){

                if(t1[i]==t2[j]){
                    dp[i][j]=1+dp[i+1][j+1];
                }else{
                    dp[i][j]=max(dp[i+1][j], dp[i][j+1]);
                }
            }
        }
        return dp[0][0];
        // return call(n1-1,n2-1,t1,t2);
    }
};
