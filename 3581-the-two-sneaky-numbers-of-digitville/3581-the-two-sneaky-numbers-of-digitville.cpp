class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int n:nums){
            map[n]++;
        }
        vector<int> output;
        for(pair<int,int> p:map){
            if(p.second == 2) output.push_back(p.first);
        }

        return output;

    }
};