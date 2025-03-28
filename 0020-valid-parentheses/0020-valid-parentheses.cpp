class Solution {
public:
    
    bool isValid(string s) {
        
        stack<char> stck;
        
        for (char elem: s){
            if (elem == '(' || elem == '[' || elem == '{'){
                stck.push(elem);
                
            }

            else {
                if (stck.empty()){return false; }
                char top = stck.top();
                if (elem == ')' && top != '(' ||
						elem == ']' && top != '[' ||
						elem == '}' && top != '{' ){
                        return false;
                    } 

                stck.pop();

                

                
                    

                
                

            }
        }

        return stck.empty();

    }
};