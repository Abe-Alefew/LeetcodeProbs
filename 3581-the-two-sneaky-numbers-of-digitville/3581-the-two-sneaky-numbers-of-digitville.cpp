class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> map;
        vector<int> output;
        for(int n:nums){
            map[n]++;
            if(map[n] > 1) output.push_back(n);
        }
        
        
        return output;

    }
};