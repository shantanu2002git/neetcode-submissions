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
    int minMeetingRooms(vector<Interval>& intervals) {
      vector<int> start, end;
      for(auto it : intervals) {
        start.push_back(it.start);
        end.push_back(it.end);
      } 
      sort(start.begin(), start.end());
      sort(end.begin(), end.end());

      int n=intervals.size();
      int st=0, en=0, room=0, mx=0;
      while(st<n){
        if(start[st]<end[en]){
            st++;
            room++;
        }else{
            room--;
            en++;
        }
        mx=max(room,mx);
      }
return mx;
    }
};
