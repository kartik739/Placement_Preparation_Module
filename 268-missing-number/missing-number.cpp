class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0;
        int xor2 = 0;
        int n = nums.size();
        for(int i =0; i<n; i++){
            xor1 = i ^ nums[i];
            xor2 = xor2 ^ xor1;
        }
        return xor2 ^ n;
        
    }
};