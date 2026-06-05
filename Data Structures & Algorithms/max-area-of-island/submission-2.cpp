class Solution {
public:
int call(int x, int y, int n, int m, vector<vector<int>>& grid){

    queue<pair<int,int>>qp;
    qp.push({x,y});
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,1,-1};
    int st=0;
     grid[x][y] = 0; 
    while(!qp.empty()){
     auto [nx, ny]=qp.front(); qp.pop();
    //  cout<<nx<< " "<<ny<<endl;
     st++;
    //  grid[nx][ny]=0;
     for(int i=0; i<4; i++){
        int nwx=dx[i]+nx, nwy=dy[i]+ny;
        if(nwx>=0 && nwx<n && nwy>=0 && nwy<m && grid[nwx][nwy]==1){
            qp.push({nwx, nwy});
             grid[nwx][nwy] = 0; 
        }
     }
    }
     cout<<"..."<<st<<endl;
    return st;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),res=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    res=max(res, call(i,j, n,m, grid));
                    // cout<<i<<" "<<j<<" "<<call(i,j, n,m, grid)<<endl;
                }
            }
        }

        return res;
    }
};



/*
grid=[[1,1,0,0,0],[1,1,0,0,0],[0,0,0,1,1],[0,0,0,1,1]]

[1,1,0,0,0]
[1,1,0,0,0]
[0,0,0,1,1]
[0,0,0,1,1]
*/
