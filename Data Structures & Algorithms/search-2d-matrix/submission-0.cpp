class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int n=mat.size(),m=mat[0].size();

        int rw=0, tcl=n*m-1, cl=m-1;
        while(cl>=0 && rw<n   ){
            if(mat[rw][cl]==tar){
                return true;
            }
            if(mat[rw][cl]>tar){
                cl--;
            }else{
                rw++;
            }
        }
        return false;

    }
};
