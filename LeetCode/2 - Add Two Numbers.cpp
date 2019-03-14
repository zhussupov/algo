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
    
    void append(ListNode* node, int value) {
        ListNode* newNode = new ListNode(value);
        while (node->next != NULL)
            node = node->next;
        node->next = newNode;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int foo = 0;
        int curL1, curL2;
        ListNode* newNode = NULL;
        while (l1 != NULL || l2 != NULL) {
            curL1 = l1 != NULL ? l1->val : 0;
            curL2 = l2 != NULL ? l2->val : 0;
            int cur = curL1 + curL2 + foo;
            foo = cur / 10;
            cur = cur % 10;
            if (newNode == NULL)
                newNode = new ListNode(cur);
            else 
                append(newNode, cur);
            if (l1 != NULL)
                l1 = l1->next;
            if (l2 != NULL)
                l2 = l2->next;
        }
        if (foo != 0)
            append(newNode, foo);
        return newNode;
    }
};