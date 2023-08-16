# Single Number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int xorr=0;
	    for(int i=0; i<nums.size(); i++){
	      xorr = xorr ^nums[i];
	    }
	    return xorr;
    }
};

# Copy List with Random Pointer

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *iter = head;
        Node  *front = head;
        while(iter !=NULL){
            front = iter->next;
            Node* copy = new Node(iter->val);
            iter->next = copy;
            copy->next = front;
            iter = front;
        }
        
        iter = head;
        while(iter != NULL){
            if(iter->random != NULL) 
                iter->next->random = iter->random->next;
            iter = iter->next->next;
        }

        iter = head;
        Node* psudoHead = new Node(0);
        Node* copy = psudoHead;
        while(iter != NULL){
            front = iter->next->next;
            copy->next = iter->next;
            iter->next = front;
            copy = copy->next;
            iter = iter->next;
        }
        return psudoHead->next;
    }
};

# Linked List Cycle

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
    bool hasCycle(ListNode *head) {
        if (!head || !head->next) return false;
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast->next && fast->next->next) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) return true;
        }
        return false;
    }
};

# Linked List Cycle II

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
        if(!head || !head->next) return NULL;
        ListNode *slow = head, *fast = head, *entry = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                while(slow != entry){
                    slow = slow->next;
                    entry = entry->next;
                }
                return entry;
            }
        }
        return NULL;
    }
};

# Maximum Product Subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre = 1, suff =1;
        int ans = INT_MIN;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(pre == 0) pre = 1;
            if(suff == 0) suff =1;

            pre = pre * nums[i];
            suff = suff * nums[n-i-1];
            ans = max(ans, max(pre, suff));
        }
        return ans;
    }
};
