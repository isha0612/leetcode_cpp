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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *sum = NULL, *p = NULL; 
        int carry = 0, x;
        while(l1 && l2) {
            int res;
            if(!carry) res = l1->val + l2->val;
            else res = l1->val + l2->val + carry;
            carry = res / 10;
            x = res % 10;
            auto q = new ListNode(x);
            if(sum == NULL)  sum = p = q;
            else {
                p->next = q;
                p = q;
            }
            l1 = l1->next;
            l2 = l2->next;
         } 
        while(l1) {
            int res;
            if(carry) res = l1->val + carry;
            else res = l1->val;
            carry = res / 10;
            int x = res % 10;
            auto q = new ListNode(x);
            p->next = q;
            p = q;
            l1 = l1->next;
        }
        while(l2) {
            int res;
            if(carry) res = l2->val + carry;
            else res = l2->val;
            carry = res / 10;
            int x = res % 10;
            auto q = new ListNode(x);
            p->next = q;
            p = q;
            l2 = l2->next;
        }
        if(carry) {
            auto q = new ListNode(carry);
            p->next = q;
            p = q;
        }
        return sum;
    }
};
