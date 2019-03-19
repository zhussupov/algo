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
    
    int dfs(ListNode* &head, ListNode* cur, ListNode* prev, int& n) {
        if (cur == NULL)
            return 0;
        int lvl = dfs(head, cur->next, cur, n) + 1;
        if (lvl == n) {
            if (prev == NULL) 
                head = cur->next;
            else 
                prev->next = cur->next;
            delete cur;
        }
        return lvl;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        dfs(head, head, NULL, n);
        return head;
    }
};