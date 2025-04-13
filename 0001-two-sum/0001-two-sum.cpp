class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; //establishing an hash map
        int length = nums.size();
        for( int i = 0; i < length; i++){
            map[nums[i]] = i; //putting values on the hashmap
        }

        for (int i = 0; i < length; i++){
            int diffr = target - nums[i];
            if (map.find(diffr) != map.end() && map[diffr] != i){
                return {i, map[diffr]};//checking on the hashmap
            }
        }

        return {};
    }
};