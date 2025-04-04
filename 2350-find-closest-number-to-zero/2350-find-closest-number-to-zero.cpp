
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int minmum = nums[0];
        for (int i= 1; i< nums.size(); i++){
            if(abs(nums[i]) < abs(minmum)){
                minmum = nums[i];
            }
        }
        for (int i= 0; i< nums.size(); i++){
            if(minmum < 0 && abs(minmum) == nums[i]){
                minmum = abs(minmum);
            }
        }
        
        return minmum;
    }
};