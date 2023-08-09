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

# Reverse Integer

class Solution {
public:
    int reverse(int x) {
        long long res = 0;
        while(x) {
            res = res*10 + x%10;
            x /= 10;
        }
        return (res<INT_MIN || res>INT_MAX) ? 0 : res;
    }
};

# Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        long long t = x, r = 0;
        while (t){
            r = r * 10 + t % 10;
            t /= 10;
        }  
        return x >= 0 && r == x;
    }
};

# Rotate Image

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0; i<n; i++){
            // row is marix[i]
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

# Pow(x, n)

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long nn = n;
        if(nn < 0) nn = -1*nn;
        while(nn){
            if(nn % 2){
                ans = ans * x;
                nn = nn -1;
            }
            else{
                x = x * x;
                nn = nn/2;
            }
        }
        if(n<0) ans=(double)(1.0)/(double)(ans);
        return ans;
    }
};
