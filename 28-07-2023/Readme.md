# Middle of the Linked List

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
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while (fast && fast->next){
            slow = slow->next;
            fast = fast ->next ->next;
        }
        return slow;
    }
};

# Check if Array Is Sorted and Rotated

class Solution {
public:
    bool check(vector<int>& A) {
        for (int i = 0, k = 0; i < A.size(); ++i)
            if (A[i] > A[(i + 1) % A.size()] && ++k > 1)
                return false;
        return true;
    }
};

# Frequency of the Most Frequent Elements

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());

        int pos = 0;
        long result = 0;
        long window_size = 0;
        long window_sum = 0;

        for(int i = 0;i<nums.size();i++)
        {
            window_sum+=nums[i];
            window_size = i-pos+1;
            
            while(( nums[i]*window_size - window_sum ) > k)
            {
                window_sum-=nums[pos++];
                window_size--;
            }

            result = max(result,window_size);
        }
        return result; 
    }
};

# Rearrange Array Elements by Sign

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> ans(n,0);
        int posIndex = 0, negIndex = 1;
        for(int i=0; i<n; i++)
        {
            if(nums[i] < 0)
            {
                ans[negIndex] = nums[i];
                negIndex += 2;
            }
            else
            {
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
        }
        return ans;
    }
};