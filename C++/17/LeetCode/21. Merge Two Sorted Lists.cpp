class Solution {
public:
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		ListNode result(0),
    *current = &result;
		while (true) {
			if (list1 == nullptr && list2 == nullptr) {
				return result.next;
			}

			else if (list1 == nullptr) {
				current->next = list2;
				return result.next;
			}

			else if (list2 == nullptr) {
				current->next = list1;
				return result.next;
			}
			else {
				if (list1->val < list2->val) {
					current->next = list1;
					current = list1;
					list1 = list1->next;
				}
				else {
					current->next = list2;
					current = list2;
					list2 = list2->next;
				}

			}

		}
	}
};
