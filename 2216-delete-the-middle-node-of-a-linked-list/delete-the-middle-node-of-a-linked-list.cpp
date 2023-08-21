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
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return NULL;
        ListNode* fast = head->next;
        ListNode* slow = head;
        ListNode* n=NULL;
        while(fast && fast->next){
            n=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        if(fast==NULL) 
        {
            ListNode* m=slow->next;
            n->next=m;
            delete slow;
            return head;
        }
        if(fast->next==NULL)
        {
            ListNode* m=slow->next;
            slow->next=m->next;
            delete m;
            return head;
        }
        return head;   
    }
};