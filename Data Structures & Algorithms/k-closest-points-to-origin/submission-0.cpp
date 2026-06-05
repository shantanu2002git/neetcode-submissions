class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       
        priority_queue<
            tuple<int,int,int>, 
            vector<tuple<int,int,int>>, 
            greater<tuple<int,int,int>>
        > pq;

        for (auto it : points) {
            int x = it[0], y = it[1];
            int sqs = x*x + y*y;
            pq.push({sqs, x, y});
        }

        vector<vector<int>> res;
        while (k--) {
            auto tp = pq.top(); pq.pop();
            res.push_back({get<1>(tp), get<2>(tp)});
        }

        return res;
    }
};
