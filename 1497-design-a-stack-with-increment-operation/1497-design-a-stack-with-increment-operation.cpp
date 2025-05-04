class CustomStack {
public:
    vector<int> s;
    int size;
    int num;
    

    CustomStack(int maxSize) {
        size = maxSize;
        num = 0;
    }
    
    void push(int x) {
        if(num < size){
            s.push_back(x);
            num++;
        }
        
    }
    
    int pop() {
        if(s.size()== 0){
            return -1;
        }else{
            int top = s.back();
            s.pop_back();
            num--;
            return top;
        }

    }
    
    void increment(int k, int val) {
        if(num <k){
            for(int i= 0; i<s.size(); i++){
                s[i]+= val;
            }
        }else{
            for(int i=0; i< k; i++){
                s[i] += val;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */