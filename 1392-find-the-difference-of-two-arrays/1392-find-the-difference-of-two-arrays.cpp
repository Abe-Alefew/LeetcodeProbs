class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;

        vector<vector<int>> output(2);
        for(int num:nums1) map1[num]++;
        for(int num:nums2) map2[num]++;
        vector<int> answer;
        for(int num:nums1){
            if(find(output[0].begin(),output[0].end(), num)!= output[0].end()) continue;
            if(!map1.count(num) || !map2.count(num)){
                output[0].push_back(num);
            }
        }
        
        for(int num:nums2){
             if(find(output[1].begin(),output[1].end(), num)!= output[1].end()) continue;
            if(!map1.count(num)|| !map2.count(num)){
                output[1].push_back(num);
            }
        }
      
        return output;
    }
};