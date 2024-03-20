class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n = strs.size();
        unordered_map<string, int> mpp;
        vector<vector<string>> ans; 
        
        for (int i = 0; i < n; i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            
            if (mpp.find(temp) != mpp.end()) {
              // If it's found, push the original string to the corresponding group (grouped by the sorted string)
                ans[mpp[temp]].push_back(strs[i]);
            } 
            else {// If it's not found, assign a new index for the sorted string in the map
                mpp[temp] = ans.size();
                // Create a new group in the ans vector and push the original string to it
                ans.push_back({strs[i]});
            }
        }
        return ans;
    }
};
