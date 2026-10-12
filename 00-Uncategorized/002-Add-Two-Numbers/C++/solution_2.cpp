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
        int carry = 0;
        ListNode* ans = l1;             // ans 儲存了l1的位置
        ListNode* prev = NULL;          // prev後續會記錄現在處理到的記憶體位置
        while (l1 && l2) {
            l1->val += l2->val + carry;
            carry = l1->val / 10;
            l1->val %= 10;
            prev = l1;
            l1 = l1->next;
            l2 = l2->next;
        }
        if (l2) {                       // 如果l2 比 l1 長 就把現在處理的位置接上為l2
            prev->next = l2;            // 接續現在處理的位置為 l2
            l1 = l2;                    // 把l2 接到 l1 後面
        }
        while (l1) {                    // 繼續處理 l1
            l1->val += carry;           
            carry = l1->val / 10;
            l1->val %= 10;
            prev = l1;
            l1 = l1->next;
        }
        if (carry) {                    // 如果還有進位
            prev->next = new ListNode(carry); // 在第35行的時候 l1->next = nullptr 所以設定 prev.next = new ListNode(carry) 就是設定 新的節點
                // 因為 l1 已經移動到 nullptr，
                // 而 prev 還指向原本的最後一個節點，
                // 所以透過 prev->next 將新節點接到 Linked List 尾端。
                                              
        }
        return ans;
    }
};