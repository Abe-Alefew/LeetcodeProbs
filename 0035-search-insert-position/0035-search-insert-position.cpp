class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int i = 0;
        while(i < nums.size()){
            if(target <= nums[i]) break;
            i++;
        }
        return i;
    }
};