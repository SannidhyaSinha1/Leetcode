// Last updated: 02/06/2026, 01:19:47
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
    void deleteNode(ListNode* node) {
        ListNode *temp=node->next;

        node->val=temp->val;
        node->next=temp->next;

        delete temp;

        
        
    }
};