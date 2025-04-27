

class MinStack {
public:
    vector<pair<int,int>> stck;
    MinStack() {}
        
    void push(int val) {
        if(stck.empty()){
            stck.push_back({val,val});
        }else{
            stck.push_back({val,min(stck.back().second,val)});
        }
        
    }
    
    void pop() {
         stck.pop_back();

    }
    
    int top() {
        return stck.back().first;
    }
    
    int getMin() {
        return stck.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */