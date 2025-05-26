class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map1;
        

        for(int num:nums1){
            map1[num]++;
        }

        vector<int> output;
        for(int num:nums2){
            if(find(output.begin(), output.end(), num) != output.end()) continue;
            if(map1.count(num)) output.push_back(num);
        }

        return output;
    }
};