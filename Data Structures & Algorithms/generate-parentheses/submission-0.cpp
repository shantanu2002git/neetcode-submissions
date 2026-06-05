class Solution {
public:
void call(vector<string>&res, string s, int n, int open , int close){
    if(s.size()==n*2){
     res.push_back(s);
     return;
    }

    if(open < n) {
            call(res, s + "(", n, open + 1, close);
        }

        if(close < open) {
            call(res, s + ")", n, open, close + 1);
        }
}
    vector<string> generateParenthesis(int n) {
        vector<string>res;
     call(res,"",n,0,0);   
     return res;
    }
};
