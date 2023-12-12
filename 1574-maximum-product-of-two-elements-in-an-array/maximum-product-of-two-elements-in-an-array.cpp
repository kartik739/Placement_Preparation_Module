class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int lmax = INT_MIN, smax = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (nums[i] > lmax) {
            smax = lmax;
            lmax = nums[i];
        } else if (nums[i] > smax) {
            smax = nums[i];
        }
    }

    return (lmax - 1) * (smax - 1);
}
};