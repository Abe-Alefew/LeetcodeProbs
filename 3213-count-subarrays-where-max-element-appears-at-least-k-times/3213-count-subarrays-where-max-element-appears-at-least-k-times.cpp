class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        //identify the maximum value
        int maxNum = nums[0];
        for(int i= 0; i< nums.size(); i++){
            if(nums[i] > maxNum){
                maxNum = nums[i];
            }
        }

        long long count = 0;
        long long valid = 0;
        //slding windows
        int  p1 = 0;
        int p2 = 0;
        while(p2 < nums.size()){
            if(nums[p2] == maxNum){
                count++;
            }
            while(count >= k){
                if(nums[p1] == maxNum) count--;
                p1++; //decremnting the window size
            }
            valid += p1;
            p2++;
        }
        return valid;
    }
};