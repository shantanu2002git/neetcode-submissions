class MinStack {
public:
    MinStack() {
        
    }
  pair<int,int>p={INT_MAX, INT_MAX};
  stack<pair<int,int>>sp;
    
    void push(int val) {
        if(sp.empty()){
     sp.push({val,val});
        }else{
             sp.push({val,min(sp.top().second,val)});
        }
       
    }
    
    void pop() {
        sp.pop();
    }
    
    int top() {
        return sp.top().first;
    }
    
    int getMin() {
         return sp.top().second;
    }
};
