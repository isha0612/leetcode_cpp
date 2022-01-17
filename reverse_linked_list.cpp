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
        if(head == NULL) return head;
        ListNode *p = NULL, *q = NULL, *r = NULL;
        q = r = head;
        p = head->next;
        r->next = NULL;
        while(p != NULL) {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        head = q;
        return head;
    }
};
