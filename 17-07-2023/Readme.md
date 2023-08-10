# Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int, int> mpp;
        int n = nums.size();
        for (int i=0; i<n; i++){
            int num = nums[i];
            int  moreNeeded = target - num;
            if(mpp.find(moreNeeded) != mpp.end()) {
                return {mpp[moreNeeded],i};
            }
            mpp[num] = i;
        }
        return {-1,-1};
        
    }
};

# Add Two Numbers

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode *dummy = new ListNode();
       ListNode *temp = dummy;
       int carry =0;
       while(l1 != NULL || l2 != NULL || carry){
           int sum =0;
           if(l1 != NULL){
               sum += l1->val;
               l1 = l1->next;
           }
           if(l2 != NULL){
               sum += l2->val;
               l2 = l2->next;
           }
           sum += carry;
           carry = sum/10;
           ListNode *node = new ListNode(sum % 10);
           temp->next = node;
           temp = temp->next;
       } 
       return dummy->next;
    }
};

# Longest Substring Without Repeating

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mpp(255, -1);
        int left = 0, right = 0;
        int n = s.size();
        int len = 0;
        while(right < n){
            if(mpp[s[right]] != -1)
                left = max(mpp[s[right]] + 1, left);
            mpp[s[right]] = right;
            len = max(len, right - left + 1);
            right++;
        }
        return len;
    }
};

# Reverse Integer

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode *dummy = new ListNode();
       ListNode *temp = dummy;
       int carry =0;
       while(l1 != NULL || l2 != NULL || carry){
           int sum =0;
           if(l1 != NULL){
               sum += l1->val;
               l1 = l1->next;
           }
           if(l2 != NULL){
               sum += l2->val;
               l2 = l2->next;
           }
           sum += carry;
           carry = sum/10;
           ListNode *node = new ListNode(sum % 10);
           temp->next = node;
           temp = temp->next;
       } 
       return dummy->next;
    }
};