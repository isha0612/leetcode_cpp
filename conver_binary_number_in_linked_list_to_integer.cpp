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
    int getDecimalValue(ListNode* head) {
        int n;
        vector <int> v;
        while(head) {
            v.push_back(head->val);
            head = head->next;
        }
        int x = 1, sum = 0;
        for(int i = v.size() - 1; i >= 0; i--) {
            sum += v[i] * x;
            x *= 2;
        }
        return sum;
    }
};
