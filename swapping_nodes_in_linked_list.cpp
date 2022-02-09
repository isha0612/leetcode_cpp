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
    ListNode* swapNodes(ListNode* head, int k) {
        vector <int> v;
        while(head) {
            v.push_back(head->val);
            head = head->next;
        }
        int t = v[k - 1];
        v[k - 1] = v[v.size() - k];
        v[v.size() - k] = t;
        ListNode *temp = new ListNode();
        for(int i = 0; i < v.size(); i++) {
            ListNode *p = new ListNode(v[i]);
            if(head == NULL) head = temp = p;
            else {
                temp->next = p;
                temp = p;
            }
        }
        return head;
    }
};
