class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;

        vector<vector<int>> output;
        for(int num:nums1){
            map1[num]++;
        }
        for(int num:nums2){
            map2[num]++;
        }
        vector<int> answer;
        for(int num:nums1){
            if(find(answer.begin(),answer.end(), num)!= answer.end()) continue;
            if(!map1.count(num) || !map2.count(num)){
                answer.push_back(num);
            }
        }
        output.push_back(answer);
        vector<int> answer1;
        for(int num:nums2){
             if(find(answer1.begin(),answer1.end(), num)!= answer1.end()) continue;
            if(!map1.count(num)|| !map2.count(num)){
                answer1.push_back(num);
            }
        }
        output.push_back(answer1);
        return output;
    }
};