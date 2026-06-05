class Solution {
   public:
    int minimumEffortPath(vector<vector<int>>& hei) {
        int n = hei.size();
        int m = hei[0].size();

        vector<vector<int>> dis(n, vector<int>(m, INT_MAX));

        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            pq;

        int dx[4] = {0, 0, -1, 1};
        int dy[4] = {1, -1, 0, 0};

        pq.push({0, {0, 0}});
        while (!pq.empty()) {
            auto [dist, cell] = pq.top();
            pq.pop();
            auto [x, y] = cell;
            if (x == n - 1 && y == m - 1) return dist;

            for (int i = 0; i < 4; i++) {
                int nx = dx[i] + x, ny = dy[i] + y;
                if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                int nedis = abs(hei[x][y] - hei[nx][ny]);
                int mini = max(nedis, dist);
                if (dis[nx][ny] > mini) {
                    dis[nx][ny] = mini;
                    pq.push({mini, {nx, ny}});
                }
            }
        }

        return 0;
    }
};