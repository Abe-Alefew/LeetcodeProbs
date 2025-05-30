class Solution {
public:
     //integer checker funcetion
        
    int calPoints(vector<string>& operations) {

        //create a stack
        stack<int> myStack;

       

        for(int i=0; i< operations.size(); i++){
            
            if(operations[i] == "+" && myStack.size()>=2){
                int sum = myStack.top();
                int x = myStack.top();
                myStack.pop();
                sum += myStack.top();
                myStack.push(x);
                myStack.push(sum); 
            }
            else if (operations[i] == "D" && myStack.size()>= 1){
                int score = myStack.top();
                score *= 2;
                myStack.push(score);
            }
            else if (operations[i] == "C" && myStack.size() >= 1){
                myStack.pop();
            }else{
                myStack.push(stoi(operations[i]));
            }
            }

            int val = 0;
            
            while (!myStack.empty()){
                val += myStack.top();
                myStack.pop();
                
            }

            return val;
        
    }
};