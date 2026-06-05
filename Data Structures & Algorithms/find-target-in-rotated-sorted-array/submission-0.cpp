class Solution {
public:
    int binarySearch(int st, int en, vector<int>& nums, int t) {
        while (st <= en) {
            int md = (st + en) / 2;
            if (nums[md] == t) return md;
            if (nums[md] < t) {
                st = md + 1;
            } else {
                en = md - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int t) {
        int n = nums.size();
        int l = 0, h = n - 1;

        // (smallest element index)
        while (l < h) {
            int md = (l + h) / 2;
            if (nums[md] > nums[h]) {
                l = md + 1;   
            } else {
                h = md;       
            }
        }
        int pivot = l;

        // Decide which half to search
        if (t >= nums[pivot] && t <= nums[n - 1]) {
            return binarySearch(pivot, n - 1, nums, t);
        } else {
            return binarySearch(0, pivot - 1, nums, t);
        }
    }
};
