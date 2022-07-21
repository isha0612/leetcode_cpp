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
    ListNode* insertionSortList(ListNode* head) {
        vector<int> v;
        ListNode *temp = head;
        while(temp) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        for(int i = 1; i < v.size(); i++) {
            int temp = v[i];
            int j = i - 1;
            while(j >= 0 && temp < v[j]) {
                v[j + 1] = v[j];
                j--;
            }
            v[j + 1] = temp;
        }
        temp = head;
        for(int i = 0; i < v.size() && temp; i++) {
            temp->val = v[i];
            temp = temp->next;
        }
        return head;
    }
};
