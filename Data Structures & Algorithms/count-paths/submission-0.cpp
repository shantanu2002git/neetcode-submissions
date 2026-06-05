class Solution {
public:
int call(int m, int n){
    if(m==0 && n==0){
        return 1;
    }
    if(m<0 || n<0){
        return 0;
    }
    int tp=call(m-1,n);
    int ri=call(m,n-1);
    return tp+ri;
}
    int uniquePaths(int m, int n) {
        return call(m-1,n-1);
    }
};
