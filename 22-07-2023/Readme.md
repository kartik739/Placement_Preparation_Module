# Intersection of Two Linked Lists

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        ListNode *a =headA;
        ListNode *b =headB;

        while(a!=b){
            a = a == NULL? headB : a->next;
            b = b == NULL? headA : b->next;
        }
        return a;
    }
};

# Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0, cnt1=0, el;
        for(int i=0; i<nums.size(); i++){
            if(cnt==0){
                cnt=1;
                el=nums[i];
            }
            else if (nums[i] == el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == el) cnt1++;
        }
        if(cnt1>(nums.size()/2)){
            return el;
        }
        return -1;
    }
};

# Rotate Array

class Solution {
    public void rotate(int[] nums, int k) {
        // O(n-k) time complexity O(k) additional space complexity
        int temp[] = new int[k];
        int n = nums.length;
        k = k%n; // after n rotations, we get back original array
        //storing last k elements
        for(int i = 0; i<k;i++ ){
            temp[i] = nums[n-k+i];
        }

        //shift remanining elements
       
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }
        // for(int i = k; i>=0;i--){
        //     nums[i+k] = nums[i];
        //     System.out.println(nums[i+k]);
        // }

        //rotating k elements
         for(int i = 0; i<k;i++ ){
            nums[i] = temp[i];
        } 
        
    }
}

# Reverse Linked List

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
    ListNode* reverseList(ListNode* head) {
        ListNode *newHead = NULL;
        while(head != NULL){
            ListNode *next = head->next;
            head->next = newHead;
            newHead = head;
            head = next;
        }
        return newHead;
    }
};

# Majority Element II

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0, cnt2=0;
        int el1 = INT_MIN;
        int el2 = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(cnt1==0 && el2!= nums[i]){
                cnt1=1;
                el1=nums[i];
            }
            else if(cnt2==0 && el1!= nums[i]){
                cnt2=1;
                el2=nums[i];
            }
            else if (nums[i] == el1) cnt1++;
            else if (nums[i] == el2) cnt2++;
            else{
                cnt1--, cnt2--;
            }
        }
        vector<int> ls;
        cnt1 = 0, cnt2 =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == el1) cnt1++;
            if(nums[i] == el2) cnt2++;
        }
        int mini = (int)(nums.size()/3) + 1;
        if(cnt1 >= mini) ls.push_back(el1);
        if(cnt2 >= mini) ls.push_back(el2);
        sort(ls.begin(), ls.end());
        return ls;
    }
};
