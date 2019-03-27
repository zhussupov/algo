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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL)
            return head;
        ListNode* cur = head;
        if (head->next != NULL)
            head = head->next;
        ListNode* prev = NULL;
        while(cur) {
            ListNode* temp = cur->next;
            if (temp != NULL) {
                cur->next = temp->next;
                temp->next = cur;
                if (prev != NULL)
                    prev->next = temp;
            }
            prev = cur;
            cur = cur->next;
        }
        return head;
    }
};