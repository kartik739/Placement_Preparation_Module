#  Reverse Nodes in k-Group
# LEETCODE HARD 

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || k==1) return head;
        ListNode *dummy = new ListNode(0);
        dummy->next = head;

        ListNode *cur = dummy, *nex = dummy, *pre = dummy;
        int count = 0;

        while(cur->next != NULL){
            cur = cur->next;
            count++;
        }

        while(count >= k){
            cur = pre->next;
            nex = cur->next;
            for(int i=1; i<k; i++){
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;
            }
            pre = cur;
            count -= k;
        }
        return dummy->next;
    }
};


# Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0; 
        for(int j=1; j<nums.size(); j++){
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
                nums[i] = nums[j];
            }
        }
        return i +1;
    }
};

# Next Permutation

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }
        for(int i=n-1; i>=ind && ind != -1; i--){
            if(nums[i] > nums[ind]){
                swap(nums[i], nums[ind]);
                break;
            }
        }
        reverse(nums.begin() + ind + 1, nums.end());
    }
};