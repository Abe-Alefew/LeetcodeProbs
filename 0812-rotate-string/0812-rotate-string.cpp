class Solution {
public:
    bool rotateString(string s, string goal) {
        int n= s.length();
        if(n == goal.length()){
            string str = s + s;
            return str.find(goal) != std::string::npos;
        }else{
            return false;
        }
        
    }
}; 