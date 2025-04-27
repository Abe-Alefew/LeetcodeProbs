class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;

        int i=0;
        while(i < word.length() && word[i] != ch){
            st.push(word[i]);
            i++;
        }
        if(i < word.length()){
            st.push(ch);
            i++;
        }else{
            return word;
        }
        
        string output = "";
        while(!st.empty()){
            output+= st.top();
            st.pop();
        }
        for(int j = i; j < word.length(); j++){
            output+= word[j];
        }
        
        return output;

    }
};