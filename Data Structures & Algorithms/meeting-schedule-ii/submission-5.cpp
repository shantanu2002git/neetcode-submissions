/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& inv) {
      int n=inv.size();
      int en=1e6+1;
      vector<int>dp(en,0);
      for(auto it  : inv){
        dp[it.start]++;
        dp[it.end]--;
      }
      int sroom=0, mxroom=0;
      for(auto l : dp){
sroom+=l;
mxroom=max(mxroom, sroom);
      }
      return mxroom;
    }
};
