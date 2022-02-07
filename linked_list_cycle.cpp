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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return 0;
        ListNode* q = head;
        ListNode* p = head;
        while(p && p->next) {
            q = q->next;
            p = p->next->next;
            if(p == q) return 1;
        }
        return 0;
    }
};
