class Solution {
public:
int call(int m, int n){
    if(m==0 && n==0){
        return 1;
    }
    if(m<0 || n<0){
        return 0;
    }
    int tp=call(m-1,n);
    int ri=call(m,n-1);
    return tp+ri;
}
    int uniquePaths(int m, int n) {
        // return call(m-1,n-1);
vector<vector<int>>dp(m,vector<int>(n,0));
// dp[0][0]=1;
dp[m-1][n-1]=1;
for(int i=m-1; i>=0; i--){
    for(int j=n-1; j>=0; j--){
     if(i==m-1 && j==n-1) continue;

     int dw=(i+1<m) ? dp[i+1][j] : 0;
     int ri=(j+1<n) ? dp[i][j+1] : 0;

      dp[i][j]=(dw+ri);
    }
}
return dp[0][0];

    }
};
