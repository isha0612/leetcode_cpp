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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0 || !head || !head->next)
            return head;
        ListNode* temp = head;
        int n = 0;
        while(temp) {
            temp = temp->next;
            n++;
        }
        k = k % n;
        int i = 0;
        while(i < k) {
            ListNode* temp = head, *q;
            while(temp->next) {
                q = temp;
                temp = temp->next;
            }
            q->next = NULL;
            temp->next = head;
            head = temp;
            i++;
        }
        return head;
    }
};
