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

# Fibonacci Number

class Solution {
public:
    int fib(int n) {
        vector<int> fn = { 0, 1 };
		for (int i = 2; i <= n; i++) {
			fn[i % 2] = fn[0] + fn[1];
		}
		return fn[n % 2];
    }
};

# 
