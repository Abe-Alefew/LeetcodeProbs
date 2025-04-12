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
    ListNode* reverseList(ListNode* head) {
        // using three pointers

        ListNode* before = nullptr;
        ListNode* temp = head;
        while(temp != nullptr){
            ListNode* after = temp -> next;
            temp -> next = before;
            before = temp;
            temp = after;

        }

        return before;
    }
};