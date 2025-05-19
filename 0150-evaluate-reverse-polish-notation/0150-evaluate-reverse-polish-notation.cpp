class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        int first, second, third;
        for(string s: tokens){
            
           if(s == "+" || s == "*" || s == "-"|| s == "/" ){
                if(stk.size() >= 2){
                    second = stk.top();
                    stk.pop();
                    first = stk.top();
                    stk.pop();
                    if(s == "+") third = first + second;
                    if(s == "-") third = first - second;
                    if(s == "*") third = first * second;
                    if(s == "/") third = first / second;
                    stk.push(third);
                    
                }
            }
            else{
                stk.push(stoi(s));
                }
                
        }

        return stk.top();
    }
};