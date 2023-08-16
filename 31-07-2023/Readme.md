# Sort Colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int low=0, mid=0, high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};

# Pascal's Triangle

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i<=numRows; i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
    vector<int> generateRow(int row){
        long long ans=1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col = 1; col<row; col++){
            ans = ans * (row - col);
            ans = ans / (col);
            ansRow.push_back(ans);
        }
        return ansRow;
    }
};

# Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int maxProfit =0;
        int n = prices.size();
        for(int i = 1; i<n;i++){
            int cost = prices[i] - mini;
            maxProfit = max(maxProfit, cost);
            mini = min(mini, prices[i]);
        }
        return maxProfit;
    }
};

# Valid Palindrome

class Solution{
public:
    bool isPalindrome(string s){
        string str;
        for (int i = 0; i < s.size(); i++){
            if (isalpha(s[i]) or isdigit(s[i])){
                str.push_back(s[i]);
            }
        }
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        string s1 = str;
        reverse(s1.begin(), s1.end());
        return s1 == str;
    }
};

# Longest Consecutive Sequence 
 
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int longest = 1;
        unordered_set<int> st;
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            if(st.find(it - 1) == st.end()){
                int cnt = 1;
                int x = it;
                while(st.find(x + 1) != st.end()){
                    x += 1;
                    cnt += 1; 
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};
