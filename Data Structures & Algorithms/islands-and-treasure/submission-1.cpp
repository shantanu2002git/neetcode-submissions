class Solution {
   public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;

        int n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0) {
                    q.push({i, j});
                }
            }
        }

        int dx[4] = {0, 0, -1, 1};
        int dy[4] = {-1, 1, 0, 0};
        while (!q.empty()) {
            auto [mi, mj] = q.front();
            q.pop();
            // grid[mi][mj] = -1;
            for (int i = 0; i < 4; i++) {
                int ni = mi + dx[i], nj = mj + dy[i];
                if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                    if(grid[ni][nj]>grid[mi][mj]+1){
                       grid[ni][nj]= grid[mi][mj]+1;
                       q.push({ni,nj});
                    }
                }
            }
        }
    }
};
