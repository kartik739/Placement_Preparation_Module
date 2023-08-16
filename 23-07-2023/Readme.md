# Palindrome Linked List

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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = reverseList(slow->next);
        slow = slow->next;

        while(slow != NULL){
            if(head->val != slow->val) return false;
            head = head->next;
            slow = slow->next;
        }
        return true;
    }

    ListNode *reverseList(ListNode* head){
        ListNode* pre=NULL;
        ListNode* next=NULL;
        while(head != NULL){
            next = head->next;
            head->next = pre;
            pre = head;
            head = next;
        }
        return pre;
    }
};

# Delete Node in a Linked List

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
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

# Missing Number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0;
        for(int i=0; i<n; i++){
            xor1 ^= i ^ nums[i];
        }
        return xor1 ^ n;
    }
};

# Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
	    for(int i=0; i<nums.size(); i++){
	        if(nums[i] != 0){
	            temp.push_back(nums[i]);
	        }
	    }
	    int nonzeros = temp.size();
	    for(int i =0; i<nonzeros; i++){
	        nums[i] = temp[i];
	    }
	    for(int i= nonzeros; i<nums.size(); i++){
	        nums[i] = 0;
	    }
    }
};