class Solution
{
    public:
        string reverseWords(string s)
        {
            vector<string> arr;

            int n = s.size();

            int i = 0;
            while (i < n)
            {
                string temp = "";
                while (i < n && s[i] != ' ')
                {
                    temp += s[i];
                    i++;
                }

                if (temp.size() > 0)
                    arr.push_back(temp);
                i++;
            }

            string ans = "";
            for (int i = arr.size() - 1; i >= 0; i--)
            {
                ans += arr[i];
                ans += " ";
            }

            ans.pop_back();

            return ans;
        }
};