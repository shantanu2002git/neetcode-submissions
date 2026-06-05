class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> q;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 0) {
                    q.push({i, j});
                }
            }
        }

        int dx[4] = {0, 0, -1, 1};
        int dy[4] = {-1, 1, 0, 0};

        // Multi-source BFS
        while(!q.empty()) {

            auto [x, y] = q.front();
            q.pop();

            for(int i = 0; i < 4; i++) {

                int nx = x + dx[i];
                int ny = y + dy[i];

                // Boundary check
                if(nx >= 0 && nx < n && ny >= 0 && ny < m) {
                    if(grid[nx][ny] > grid[x][y] + 1) {

                        grid[nx][ny] = grid[x][y] + 1;

                        q.push({nx, ny});
                    }
                }
            }
        }
    }
};