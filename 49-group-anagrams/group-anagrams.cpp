class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Create an unordered_map to store sorted strings along with their indices
        unordered_map<string, int> mp;
        // Create a 2D vector to store grouped anagrams
        vector<vector<string>> ans; 

        // Iterate through each string in the input vector
        for (int i = 0; i < strs.size(); i++) {
            // Create a copy of the current string
            string temp = strs[i];
            // Sort the characters in the string
            sort(temp.begin(), temp.end());
            // Check if the sorted string is already in the map
            if (mp.find(temp) != mp.end()) {
                // If it's found, push the original string to the corresponding group
                // (grouped by the sorted string)
                ans[mp[temp]].push_back(strs[i]);
            } else {
                // If it's not found, assign a new index for the sorted string in the map
                mp[temp] = ans.size();
                // Create a new group in the ans vector and push the original string to it
                ans.push_back({strs[i]});
            }
        }

        // Return the grouped anagrams
        return ans;
    }
};
