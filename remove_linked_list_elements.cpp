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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return head;
        vector <int> v;
        while(head) {
            v.push_back(head->val);
            head = head->next;
        }
        v.erase(remove(v.begin(), v.end(), val), v.end());
        ListNode *t = new ListNode();
        for(int i = 0; i < v.size(); i++) {
            ListNode *p = new ListNode(v[i]);
            if(head == NULL) head = t = p;
            else {
                t->next = p;
                t = p;
            }
        }
        return head;
    }
};
