class Solution {
   public:
    string minWindow(string s, string t) {
        int n = s.size(), m = t.size();
        int cnt = m, l = 0, start = 0, lenx = INT_MAX;
        vector<int> fq(128, 0);
        for (char c : t) fq[c]++;
        for (int r = 0; r < n; r++) {
            if (fq[s[r]] > 0) cnt--;
            fq[s[r]]--;
            while (cnt == 0) {
                if ((r - l + 1) < lenx) {
                    lenx = r - l + 1;
                    start = l;
                }
                fq[s[l]]++;
                if (fq[s[l]] > 0) {
                    cnt++;
                }
                l++;
            }
        }
        return lenx == INT_MAX ? "" : s.substr(start, lenx);
    }
};
