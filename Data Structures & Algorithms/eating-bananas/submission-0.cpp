class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int n=piles.size(), res;
       int st=1, en=*max_element(piles.begin(), piles.end()),md;
       while(st<=en){
         md=(st+en)/2;
        int time=0;
        for(int i=0; i<n; i++){
          time+=(piles[i]+md-1)/md;
        }
        if(time>h){
           
            st=md+1;
            
        }else{
             res=md;
            en=md-1;
        }
       } 
       return res;
    }
};
