class Solution {
public:
    bool backspaceCompare(string s, string t) {
         stack<char> s_stack;
         stack<char> t_stack;
         for(char c:s){
            if(c == '#' && !s_stack.empty()){
                s_stack.pop();
            }
            else{
                if(c != '#'){
                    s_stack.push(c);
                }
            }
         }
         for(char m:t){
            if(m == '#' && !t_stack.empty()){
                t_stack.pop();
            }
            else{
                if(m != '#'){
                    t_stack.push(m);
                }
                
            }
         }
         if(s_stack == t_stack){
            return true;
         }else{
            return false;
         }
    }
};