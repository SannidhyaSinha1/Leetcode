// Last updated: 26/05/2026, 00:56:32
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow;
        ListNode *fast;

        slow=head;
        fast=head;

        while(fast!=NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                slow=head;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;    
                }
                return slow;
            }
        }
        return NULL;


        
    }
};