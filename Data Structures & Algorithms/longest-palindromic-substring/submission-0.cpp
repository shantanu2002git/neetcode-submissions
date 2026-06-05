class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int res=0,start=0;

        for(int i=0; i<n; i++){
            int lef=i, rig=i;
            while(lef>=0 && rig<n && s[lef]==s[rig]){
                int len=rig-lef+1;
                if(len>res){
                    res=len;
                    start=lef;
                }
                  lef--;
                  rig++;
            }
            lef=i, rig=i+1;
           while(lef>=0 && rig<n && s[lef]==s[rig]){
                int len=rig-lef+1;
                if(len>res){
                    res=len;
                    start=lef;
                }
                  lef--;
                  rig++;
            }
        }
return s.substr(start,res);
    }
};
