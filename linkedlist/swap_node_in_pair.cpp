// Swap Nodes in Pairs

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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* pprev = NULL;
        if(head == NULL || head->next == NULL) return head;
        head = head->next;
        while(temp != NULL && temp->next != NULL) {
            pprev = prev;
            prev = temp;
            temp = temp->next;
            prev->next = temp->next;
            temp->next = prev;
            if(pprev) pprev->next = temp;
            temp = prev->next;
        }
        return head;
    }
};
