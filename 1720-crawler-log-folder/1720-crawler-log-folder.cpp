class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> file;
        for(string log:logs){
            if (log == "../" ){
                if(!file.empty()){
                    file.pop();
                }
            }
            else if(log != "./"){
                file.push(log);
               
            }
            
            
        }
        if(file.empty()){
            return 0;
        }else{
            return file.size();
        }

        
    }
};