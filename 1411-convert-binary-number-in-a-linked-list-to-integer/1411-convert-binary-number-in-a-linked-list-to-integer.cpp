/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int count = -1;
        while(temp){
            temp = temp-> next;
            count++;
        }
        delete temp;
        ListNode* temp1 = head;
        int output =  0;
        while(temp1){
            output += (temp1-> val)*pow(2,count);
            temp1 = temp1->next;
            count--;
        }
        return output;
    }
};