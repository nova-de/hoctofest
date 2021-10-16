// Linked List Cycle II
// Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

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
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr)
            return nullptr;
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        while(temp1 && temp1->next)
        {
            temp1 = temp1->next->next;
            temp2 = temp2->next;
            if(temp1==temp2)
                break;
        }
        if(temp1==nullptr || temp1->next == nullptr)
            return nullptr;
        else
        {
            ListNode* start = head;
            while(start!=temp2)
            {
                start = start->next;
                temp2 = temp2->next;
            }
            return start;
        }
        return nullptr;
    }
};
