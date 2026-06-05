class Solution {
public:
int call(int i, int n, vector<int>& coins, int amount ){
    if(amount==0){
       return 0;
    }
    if(i==n) return 1e9;
    int tt=1e9, nn=0;
    if(amount>=coins[i]){
        tt=1+call(i,n,coins, amount-coins[i]);
    }
    nn=call(i+1,n,coins,amount);

    return min(tt,nn);
}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        return call(0,n,coins,amount)==1e9 ? -1 : call(0,n,coins,amount) ;
    }
};


// Bijoy : ki sahjo tai tumi korbe amrr 'anuradha'...
// Anuradha : jani sajhoo koerer motto kichuei nai mar, kintu prean diya sahoo jo ta too korte parri !!!