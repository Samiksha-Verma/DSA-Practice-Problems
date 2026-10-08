class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> sub;

        int i = 0, j = 0;
        int longest = 0;

        while (j < s.size()) {

            sub[s[j]]++;

            while (sub[s[j]] > 1) {
                sub[s[i]]--;
                i++;
            }

            longest = max(longest, j - i + 1);
            j++;
        }

        return longest;
    }
};