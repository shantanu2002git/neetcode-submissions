class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        map<char, int> mps1;
        int lens1 = s1.size();
        for (int i = 0; i < s1.size(); i++) {
            mps1[s1[i]]++;
        }

        for (int i = 0; i < s2.size(); i++) {
            int curlen = 0;
            map<char, int> mps2;
            for (int j = i; j < s2.size(); j++) {
                char c = s2[j];
                mps2[c]++;

                if (mps1[c] < mps2[c]) break;

                if (j - i + 1 == lens1) return true;
            }
        }
        return false;
    }
};
