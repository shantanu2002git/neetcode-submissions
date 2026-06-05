class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size(), res=0;
        for(int i=0; i<n; i++){
            int st=i, en=i;
            while(st>=0 && en<n && s[st]==s[en]){
                 st--;
                 en++;
                 res++;
            }

            st=i, en=i+1;
             while(st>=0 && en<n && s[st]==s[en]){
                 st--;
                 en++;
                 res++;
            }
        }
        return res;
    }
};
