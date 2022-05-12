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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || head->next == NULL) return head;
        if(left == 1) {
            head = reverseList(head, right - left);
            return head;
        }
        ListNode *temp = head;
        int i = 1;
        while(i != left - 1 && temp) {
            temp = temp->next;
            i++;
        }
        temp->next = reverseList(temp->next, right - left);
        return head;
    }
    
    ListNode* reverseList(ListNode* head, int idx) {
        if(head == NULL) return head;
        ListNode *p = NULL, *q = NULL, *r = NULL;
        q = r = head;
        p = head->next;
        r->next = NULL;
        ListNode *temp = r;
        int i = 0;
        while(p != NULL && i != idx) {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
            i++;
        }
        head = q;
        while(p) {
            temp->next = p;
            temp = p;
            p = p->next;
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || head->next == NULL) return head;
        vector <int> v;
        while(head) {
            v.push_back(head->val);
            head = head->next;
        }
        int i = left - 1, j = right - 1;
        while(i < j) {
            int t = v[i];
            v[i] = v[j];
            v[j] = t;
            i++; j--;
        }
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
