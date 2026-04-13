# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        current = head
        nodes = []

        while current:
            nodes.append(current)
            current = current.next

        start = 0
        end = len(nodes) - 1

        while start < end:
            if nodes[start].val != nodes[end].val:
                return False
            start += 1
            end -= 1
        return True
        