# Rotate List

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
    ListNode* rotateRight(ListNode* head, int k) {
        //edge cases
        if(!head || !head->next || k == 0) return head;

        //compute the len
        ListNode *cur = head;
        int len = 1;
        while(cur->next && ++len)
            cur = cur->next;
        
        //go till that node
        cur->next = head;
        k = k % len;
        k = len - k;
        while(k--) cur = cur->next;

        //make the node head and break connection
        head = cur->next;
        cur->next = NULL;

        return head;
    }
};

# Unique Paths

class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = n + m - 2;
        int r = m - 1;
        double res = 1;
        for(int i =1; i<=r; i++)
            res = res * (N - r + i)/i;
        return (int)res;
    }
};

# Set Matrix Zeroes

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // int col[m] = {0}; -> matrix[0][..]
        // int row[n] = {0}; -> matrix[..][0]
        int n=matrix.size(), m=matrix[0].size(), col0 = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    // mark the i-th row
                    matrix[i][0] = 0;
                    // mark the j-th row
                    if (j != 0)
                        matrix[0][j] = 0;
                    else
                        col0 = 0;
                }
            }
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][j] != 0){
                    // check for col & row
                    if(matrix[0][j] == 0 || matrix[i][0] == 0){
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        if(matrix[0][0] == 0){
            for(int j=0; j<m; j++){
                matrix[0][j] = 0;
            }
        }
        if(col0 == 0){
            for(int i=0; i<n; i++){
                matrix[i][0] = 0;
            }
        }
    }
};

# Search a 2D Matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
        int n = matrix.size();
        int m = matrix[0].size();
        int lo = 0, hi = (n * m) - 1;
        while(lo <= hi){
            int mid = (lo+(hi -lo)/2);
            if(matrix[mid/m][mid%m] == target){
                return true;
            }
            if(matrix[mid/m][mid%m] < target){
                lo = mid + 1;
            }
            else{
                hi = mid -1;
            }
        }
        return false;
    }
};