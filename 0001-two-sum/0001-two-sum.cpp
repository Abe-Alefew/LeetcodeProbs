class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; //establishing an hash map
        int length = nums.size();
        for( int i = 0; i < length; i++){
            map[nums[i]] = i; //putting values on the hashmap
        }

        for (int i = 0; i < length; i++){
            int diff = target - nums[i];
            if (map.find(diff) != map.end() && map[diff] != i){
                return {i, map[diff]};//checking on the hashmap
            }
        }

        return {};
    }
};