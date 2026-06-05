class Solution {
public:
int step(int idx, int n, vector<int>&cost){
  if(idx>=n){
return 0;
  }
  int step1=cost[idx]+step(idx+1,n,cost);
  int step2=cost[idx]+step(idx+2,n,cost);
  return min(step1, step2);
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        return min(step(0,n,cost),step(1,n,cost));
    }
};
