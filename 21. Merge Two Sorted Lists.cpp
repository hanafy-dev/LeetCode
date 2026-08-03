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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy = new ListNode();
        ListNode *tail = dummy;
        while(list1 != nullptr && list2 != nullptr){
            if(list1 -> val < list2 -> val){
                tail -> next = list1;
                tail = tail -> next;
                list1 = list1 -> next;
            }
            else{
                tail -> next = list2;
                tail = tail -> next;
                list2 = list2 -> next;
            }
        }
        if(list1 == nullptr){
            tail -> next = list2;
        }
        else{
            tail -> next = list1;
        }
        ListNode *answer = dummy -> next;
        delete dummy;
        return answer;
    }
};

// The idea is to use a dummy node to simplify the merging process. We maintain a tail pointer that always points to the last node in the merged list. We compare the values of the current nodes in both lists and append the smaller one to the merged list, moving the corresponding pointer forward. Once we reach the end of one list, we append the remaining nodes of the other list. Finally, we return the next node of the dummy, which is the head of the merged list. The time complexity is O(n + m) and the space complexity is O(1).

/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

 

Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]
 

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.
*/