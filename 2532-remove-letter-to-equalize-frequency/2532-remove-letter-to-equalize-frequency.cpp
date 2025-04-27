class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char,int> dict;


        for(char c:word){
            dict[c]++;
        }

        for(auto& s:dict){
            s.second--;

            set<int> pSet;
            for(auto& p:dict){
                if(p.second > 0){
                     pSet.insert(p.second);
                }
               
            }
            if(pSet.size() == 1){
                return true;
            }



            s.second++;
        }
        return false;
    }
};