/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    
    void append(ListNode* &newList, ListNode* &tail, int value) {
        if (newList == NULL) {
            newList = new ListNode(value);
            tail = newList;
        } else {
            ListNode* newNode = new ListNode(value);
            tail->next = newNode;
            tail = newNode;
        }
    }
    
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* newList = NULL;
        ListNode* tail;
        while (l1 != NULL || l2 != NULL) {
            if (l1 == NULL) {
                int cur = l2->val;
                l2 = l2->next;
                append(newList, tail, cur);
            } else if (l2 == NULL) {
                int cur = l1->val;
                l1 = l1->next;
                append(newList, tail, cur);
            } else {
                if (l1->val < l2->val) {
                    int cur = l1->val;
                    l1 = l1->next;
                    append(newList, tail, cur);
                } else {
                    int cur = l2->val;
                    l2 = l2->next;
                    append(newList, tail, cur);
                }
            }
        }
        return newList;
    }
};