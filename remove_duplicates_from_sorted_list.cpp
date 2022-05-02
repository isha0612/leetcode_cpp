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
    ListNode* deleteDuplicates(ListNode* head) {
        set <int> s;
        ListNode *p = head;
        while(p) {
            s.insert(p->val);
            p = p->next;
        }
        head = NULL, p = NULL;
        for(auto it : s) {
            int i = it;
            ListNode *q = new ListNode(i);
            if(!head) head = p = q;
            else {
                p->next = q;
                p = q;
            }
        }
        return head;
    }
};

//another solution
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *temp = head;
        while(temp && temp->next) {
            while(temp && temp->next && (temp->val == temp->next->val)) {
                ListNode *q = temp->next;
                temp->next = temp->next->next;
                delete q;
            }
            temp = temp->next;
        }
        return head;
    }
};
