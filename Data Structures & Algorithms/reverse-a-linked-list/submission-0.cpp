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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr)
            return nullptr;
        ListNode* head2 = nullptr;
        ListNode* cursor = head;

        stack<ListNode*> nodeStack;
        while (cursor != nullptr) {
            nodeStack.push(cursor);
            cursor = cursor->next;
        }
        head2 = nodeStack.top();
        nodeStack.pop();
        cursor = head2;
        while (!nodeStack.empty()) {
            cursor->next = nodeStack.top();
            nodeStack.pop();
            cursor = cursor->next;
        }
        cursor->next = nullptr;
        return head2;
    }
};