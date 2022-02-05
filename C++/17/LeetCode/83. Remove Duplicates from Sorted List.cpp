class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) {
            return head;
        } 
        ListNode* p = head;

        while (p->next != nullptr) {
            if (p->next->val == p->val) {
                ListNode* toDelete = p->next;
                p->next = p->next->next;
                delete toDelete;
            }
            else {
                p = p->next;
            }
        }

        return head;
    }
};
