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
    int pairSum(ListNode* head) {
        vector <int> v;
        while(head) {
            v.push_back(head->val);
            head = head->next;
        }
        int sum = 0, ans = INT_MIN;
        int i = 0, j = v.size() - 1;
        while(i < j) {
            sum = v[i] + v[j];
            ans = max(ans, sum);
            i++; j--;
        }
        return ans;
    }
};
