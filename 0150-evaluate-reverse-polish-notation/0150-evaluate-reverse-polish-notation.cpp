class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int a,b,c;
        stack<int>stk;
        for(string it:tokens){
            if(it=="+" || it=="-" || it=="*" || it=="/"){
                b=stk.top();
                stk.pop();
                a=stk.top();
                stk.pop();
                c=(it=="+")?(a+b):(it=="-")?(a-b):(it=="*")?(a*b):(a/b);
                stk.push(c);
            }
            else stk.push(stoi(it));
        }
        return stk.top();
    }
};