class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if( nums.size() == set(nums.begin(), nums.end()).size()) 
            return false;
        else 
            return true;
    }
};