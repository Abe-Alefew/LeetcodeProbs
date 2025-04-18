class Solution {
public:
    bool areNumbersAscending(string s) {
         vector <int> check;
         int i = 0;
          while (i < s.length()) {
        if (isdigit(s[i])) {
            int num = 0;
            while (i < s.length() && isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            check.push_back(num);
        } else {
            i++;
        }
    }
         int j=0;
         while(j+1 < check.size()){
            if(check[j+1] <= check[j]){
                return false;
            }
            j++;
         }
         return true;
    }
};