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
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode *> nodeSet;
if(head == nullptr) return false;
        ListNode* cursor = head;
        while(cursor->next != nullptr && !nodeSet.contains(cursor->next) ){
        nodeSet.insert(cursor);

            cursor = cursor->next;
        }

        return (cursor->next) ? true : false;
    }
};
