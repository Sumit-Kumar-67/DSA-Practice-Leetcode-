/*
    LeetCode #2 - TAdd Two Numbers

    Difficulty: Medium
    Topic: Linked List,math
    Pattern: iteration

    Time Complexity: O(n)
    Space Complexity: O(1)
*/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* result = new ListNode(0);
        ListNode* curr = result;

        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry) {
            int val = carry;

            if (l1 != nullptr) {
                val =val+ l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                val = val + l2->val;
                l2 = l2->next;
            }

            carry = val / 10;
            val = val % 10;

            curr->next = new ListNode(val);
            curr = curr->next;
        }

        return result->next;
    }
};
