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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* current = head;
        while (current != nullptr) {
            current = current->next;
            len++;
        }
        if (len == n) {
            head = head->next;
            return head;
        }

        current = head;
        int m = 0;

        while (current != nullptr) {
            m++;
            if ((len - m) == n) {

                current->next = current->next->next;
            }
            current = current->next;
        }

        return head;
    }
};
