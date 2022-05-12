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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector <int> v;
        while(head) {
            v.push_back(head->val);
            head = head->next;
        }
        int x = v.size() - n;
        v[x] = -19999;
        ListNode *t = new ListNode();
        for(int i = 0; i < v.size(); i++) {
            if(v[i] == -19999) continue;
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head, *p = temp;
        int len = 0;
        while(temp) {
            len++;
            p = temp;
            temp = temp->next;
        }
        if(n < 0 || n > len) return head;
        int i = 0;
        temp = head;
        p = temp;
        while(i < len - n) {
            p = temp;
            temp = temp->next;
            i++;
        }
        if(i == 0) {
            head = head->next;
            delete temp;
            return head;
        }
        p->next = temp->next;
        delete temp;
        return head;
    }
};
