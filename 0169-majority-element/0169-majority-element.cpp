class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> check;

        for(int i:nums){
            check[i]++;
        }
        int maxNum = check[nums[0]];
        pair<int, int> maj = {0,0};
        for(pair<int,int> i : check ){
            if( maj.second < i.second) {
                maj = i;
                
                }
        }

        return maj.first;
    }
};