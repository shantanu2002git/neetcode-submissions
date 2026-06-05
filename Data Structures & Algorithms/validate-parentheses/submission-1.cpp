class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto i : s)
        {
            if(i=='(' || i=='{' || i=='['){
                st.push(i);
            }else{
                if(st.empty()){
                    return 0;
                }else{
                    char tp=st.top();
                    if((tp=='(' && i==')') || (tp=='{' && i=='}') || (tp=='[' && i==']')){
                        st.pop();
                    }else{
                        return 0;
                    }
                }
            }
        }
        return st.empty();
    }
};
