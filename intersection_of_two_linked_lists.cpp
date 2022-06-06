/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*> s;
        auto it = headA;
        while(it) {
            s.insert(it);
            it = it->next;
        }
        it = headB;
        while(it) {
            if(s.find(it) == s.end())
                it = it->next;
            else
                return it;
        }
        return it;
    }
};
