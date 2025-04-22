class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i=0; i< nums.size(); i++){
            int temp = nums[i];
            int sum = 0;
            while(temp != 0){
                sum += temp%10;
                temp /= 10;
            }
            nums[i] = sum;
        }
        int min = nums[0];
        for(int i=1; i< nums.size(); i++){
            if(nums[i] < min){
                min = nums[i];
            }
        }

        return min;
        
    }
};