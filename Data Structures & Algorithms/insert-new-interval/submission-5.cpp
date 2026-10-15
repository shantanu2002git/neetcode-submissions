class Solution {
   public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newIntervals) {
        int n = intervals.size(), it = 0;
        vector<vector<int>> res;
        while (it < n && intervals[it][1] < newIntervals[0]) {
            res.push_back(intervals[it]);
            it++;
        }
        while (it < n && newIntervals[1] >= intervals[it][0]) {
            newIntervals[0] = min(newIntervals[0], intervals[it][0]);
            newIntervals[1] = max(newIntervals[1], intervals[it][1]);
            it++;
        }
        res.push_back(newIntervals);
        while (it < n) {
            res.push_back(intervals[it]);
            it++;
        }
        return res;
    }
};
