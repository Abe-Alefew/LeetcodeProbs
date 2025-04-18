class Solution {
public:

    string countAndSay(int n) {
            //base case
            if(n == 1) return "1";
            string before = countAndSay(n-1);
            string result = "";
            int count = 1;
            for(int i=1; i< before.length(); i++){
                if(before[i] == before[i-1]){
                    count++;
                }else{
                    result += to_string(count) + before[i-1];
                    count = 1;
                }

            }

            result += to_string(count) + before.back();
            return result;
    }
};