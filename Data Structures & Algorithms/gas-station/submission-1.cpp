class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
     int n=gas.size(), pvgas=0;
     for(int start=0; start<n; start++){
       int tank=0, count=0, i=start;
       while(count<n){
        tank+=gas[i];
        if(tank<cost[i]){
            break;
        }
        tank-=cost[i];
        count++;
       i=(i+1)%n;
       }
       if(count==n) return start;
     }   
     return -1;
    }
};
