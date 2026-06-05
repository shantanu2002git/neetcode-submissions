class Solution {
public:
void dfs(int x, int y, int n, int m, vector<vector<char>>& bd ){
if(x<0 || y<0 || x>=n || y>=m || bd[x][y]!='O'){
    return ;
}
bd[x][y]='.';
dfs(x+1,y,n,m,bd);
dfs(x-1,y,n,m,bd);
dfs(x,y+1,n,m,bd);
dfs(x,y-1,n,m,bd);

}
    void solve(vector<vector<char>>& bd) {
        int n=bd.size(), m=bd[0].size();
        for(int i=0; i<m; i++){
            if(bd[0][i]=='O'){
                dfs(0,i,n,m,bd);
            } if(bd[n-1][i]=='O'){
                dfs(n-1,i,n,m,bd);
            }
        }


        for(int j=0; j<n; j++){
           if(bd[j][0]=='O'){
                dfs(j,0,n,m,bd);
            } if(bd[j][m-1]=='O'){
                dfs(j,m-1,n,m,bd);
            } 
        }

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(bd[i][j]=='O'){
bd[i][j]='X';
        }else if(bd[i][j]=='.'){
            bd[i][j]='O';
        }
    }
}



    }
};
