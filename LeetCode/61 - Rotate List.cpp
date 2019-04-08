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
    
    ListNode* getTail(ListNode* head, int& sz) {
        if (head == NULL) {
            sz = 0;
            return NULL;
        }
        sz = 1;
        while (head->next != NULL) {
            sz++;
            head = head->next;
        }
        return head;   
    }
    
    ListNode* getKthFromEnd(ListNode* head, int len, int k) {
        for (int i = 0; i < len - (k + 1); i++)
            head = head->next;
        return head;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        int len;
        ListNode* tail = getTail(head, len);
        if (len == 0)
            return head;
        k %= len;
        if (k == 0)
            return head;
        tail->next = head;
        ListNode* kth = getKthFromEnd(head, len, k);
        head = kth->next;
        kth->next = NULL;
        return head;
    }
};