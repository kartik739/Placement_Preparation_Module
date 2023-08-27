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
    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right) {
        if (!left) return right;
        if (!right) return left;

        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;

        while (left && right) {
            if (left->val < right->val) {
                temp->next = left;
                temp = left;
                left = left->next;
            } else {
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }

        if (left != nullptr) {
            temp->next = left;
        }
        if (right != nullptr) {
            temp->next = right;
        }

        ans = ans->next;
        return ans;   
    }

    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
// break in 2
        ListNode* mid = findMid(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;
//recursive call to both parts
        left = sortList(left);
        right = sortList(right);
// merge
        ListNode* result = merge(left, right);
        return result;
    }
};