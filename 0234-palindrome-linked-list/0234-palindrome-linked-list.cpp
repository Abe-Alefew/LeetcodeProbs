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
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
            //using fast and slow pointer
            ListNode* fast = head;

            ListNode* slow = head;

            while(fast && fast-> next){
                slow = slow-> next;
                fast = fast -> next -> next;
            }
            //reversing the second half using the slow pointer as the middle
            
            ListNode*  temp = slow;
            ListNode*  before = nullptr;

            while(temp){
                ListNode* after = temp-> next;
                temp -> next = before;
                before = temp;
                temp = after;
            }

            ListNode* compare1 = before;
            ListNode* compare2 = head;


            while(compare1){
                if(compare1-> val != compare2 -> val){
                    return false;
                    
                }
                compare1 = compare1 -> next;
                compare2 = compare2 -> next;
            }
            return true;

    }
};