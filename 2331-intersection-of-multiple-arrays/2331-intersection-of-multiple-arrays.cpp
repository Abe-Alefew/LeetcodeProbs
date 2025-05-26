class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int> map;


        for(vector<int>& vec: nums){
            for(int& num:vec){
                map[num]++;
            }
        }

         vector<int> output;
        int size = nums.size();
        for(pair<int,int> p: map){
            if(p.second == size) output.push_back(p.first);
            
            
        }
        sort(output.begin(), output.end());
        return output;
    }
};