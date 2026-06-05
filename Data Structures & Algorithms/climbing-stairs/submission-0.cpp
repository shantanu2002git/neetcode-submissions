class Solution {
public:
int call(int n){
    if(n==0){
        return 1;
    }else if(n<0){
        return 0;
    }
    int stp1=call(n-1);
    int stp2=call(n-2);
    return stp1+stp2;
}
    int climbStairs(int n) {
        return call(n);
    }
};
