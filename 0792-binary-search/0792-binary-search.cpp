class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        while(left < right){
            int mid = (left+right)/2;
            if (nums[mid] == target) return mid;
            if( target > nums[mid]){
                left = mid +1;
            }else{
                right = mid;
            }
        }
        return -1;
    }
};