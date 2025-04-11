class Solution {
public:
    string removeStars(string s) {
        string res;
        for(char elem:s){
            if(elem == '*' && !res.empty()){
                res.pop_back();
            }else{
                if(elem != '*'){
                    res.push_back(elem);
                }
            }
        }

        
        return res;
    }
};