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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *res = NULL, *p = NULL;
        while(list1 && list2) {
            if(list1->val <= list2->val) {
                if(res == NULL) {
                    res = p = list1;
                } 
                else {
                    p->next = list1;
                    p = list1;
                }
                list1 = list1->next;
            }
            else if(list1->val > list2->val) {
                if(res == NULL) {
                    res = p = list2;
                } 
                else {
                    p->next = list2;
                    p = list2;
                }
                list2 = list2->next;
            }
        }
        
        while(list1) {
            if(res == NULL) {
                res = p = list1;
            } 
            else {
                p->next = list1;
                p = list1;
            }
            list1 = list1->next;
            p->next = NULL;
        }
        
        while(list2) {
            if(res == NULL) {
                res = p = list2;
            }
            else {
                p->next = list2;
                p = list2;
            }
            list2 = list2->next;
            p->next = NULL;
        }
        
        return res;
    }
};
