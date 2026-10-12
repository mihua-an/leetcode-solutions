class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def addTwoNumbers(self, l1: ListNode | None, l2: ListNode | None) -> ListNode | None:
        dummy = ListNode()
        curr = dummy
        c = 0
        while l1 or l2 or c:
            l1_num = l1.val if l1 else 0
            l2_num = l2.val if l2 else 0
            c, reminder = divmod(c + l1_num + l2_num, 10)

            curr.next = ListNode(reminder)
            curr = curr.next

            if l1:
                l1 = l1.next
            if l2:
                l2 = l1.next
        return dummy.next