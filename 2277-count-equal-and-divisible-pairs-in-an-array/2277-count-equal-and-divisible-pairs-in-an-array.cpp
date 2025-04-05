class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count = 0;
        for (int i= 0; i< nums.size(); i++){
            for (int j= i+1 ; j < nums.size(); j++){
             if ((i*j) != 0){
                if ((nums[i] == nums[j]) && ((i*j) % k ==  0)){
                    count++;
                }
             }
             if ((i*j) == 0 && (nums[i] == nums[j])){
                count++;
             }
    
                
            }
        }
        return count;
    }
};