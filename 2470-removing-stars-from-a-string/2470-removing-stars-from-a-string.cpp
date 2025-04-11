class Solution {
public:
    string removeStars(string s) {
        stack<char> res;
        for(char elem:s){
            if(elem == '*' && !res.empty()){
                res.pop();
            }else{
                if(elem != '*'){
                    res.push(elem);
                }
            }
        }

        string reversed = "";
        while(!res.empty()){
            reversed +=res.top();
            res.pop();
        }
        std::reverse(reversed.begin(), reversed.end());
        return reversed;
    }
};