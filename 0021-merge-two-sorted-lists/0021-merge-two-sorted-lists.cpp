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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p1 = list1;
        ListNode* p2 = list2;
        ListNode* list3 = new ListNode(); // dummy node
        ListNode* res = list3;


        while(p1 != nullptr && p2!= nullptr){
             if(p1 -> val > p2-> val){
                res ->next = p2;
                p2 = p2 -> next;
             }else {
                res -> next = p1;
                p1 = p1-> next;
             }
             res = res-> next;
        }
        if( p1 != nullptr) {
            res -> next = p1;
        }
        if( p2!= nullptr) {
            res -> next = p2;
        }


        ListNode* head = list3 -> next;
        delete list3;
        return head;

        


    }
};