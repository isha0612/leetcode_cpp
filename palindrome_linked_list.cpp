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
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL) return false;
        ListNode *slow = head, *fast = head;
        while(fast) {
            fast = fast->next;
            if(fast) fast = fast->next;
            if(!fast) break;
            slow = slow->next;
        }
        slow->next = reverseList(slow->next);
        slow = slow->next;
        ListNode *temp = slow;
        while(head != slow && temp) {
           if(head->val != temp->val) return false;
           head = head->next;
           temp = temp->next;
        }
        return true;
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
    bool isPalindrome(ListNode* head) {
        if(head == NULL) return false;
        vector <int> v;
	    while(head) {
            v.push_back(head->val);
            head = head->next;
        }
        int i = 0, j = v.size() - 1;
        while(i < j) {
            if(v[i] != v[j]) return false;
            i++; j--;
        }
        return true;
    }
};
