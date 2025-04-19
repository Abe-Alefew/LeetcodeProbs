class Solution {
public:
    bool isPalindrome(string s) {
         string filtered ="";
         for(char c:  s){
            if (isalnum(c)){
                filtered+= tolower(c);
            }
         }
         int index = 0;
         int index1 = filtered.length()-1;
         while(index < index1){
            if(filtered[index] != filtered[index1]){
                return false;
            }else{
                index++;
                index1--;
            }

         }
         return true;
    }
};