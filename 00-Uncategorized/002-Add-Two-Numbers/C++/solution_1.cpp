#include <iostream>


struct ListNode {
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode *next): val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy = ListNode();
        ListNode* cur = &dummy;
        int c = 0;
        while (l1 || l2 || c)
        {
            int l1_num = l1 ? l1->val : 0;
            int l2_num = l2 ? l2->val : 0;
            int sum = c + l1_num + l2_num;
            c = sum / 10;
            int d = sum % 10;

            cur->next = new ListNode(d);
            cur = cur->next;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
 
        }
        return dummy.next;
    }
};