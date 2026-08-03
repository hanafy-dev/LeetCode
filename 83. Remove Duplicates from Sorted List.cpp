class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;

        while (temp && temp->next) {
            if (temp->val == temp->next->val) {
                ListNode *del = temp -> next;
                temp->next = temp->next->next;
                delete del;
            } else {
                temp = temp->next;
            }
        }

        return head;        
    }
};

// Avoid memory leak by deleting the duplicate nodes. The time complexity is O(n) and the space complexity is O(1).