
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> prefix(n, 0);
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            char first = words[i][0];
            char last = words[i].back();

            if ((first == 'a' || first == 'e' || first == 'i' ||
                 first == 'o' || first == 'u') &&
                (last == 'a' || last == 'e' || last == 'i' ||
                 last == 'o' || last == 'u')) {
                prefix[i] = 1;
            }

            if (i > 0) {
                prefix[i] += prefix[i - 1];
            }
        }

        for (auto &q : queries) {
            int l = q[0];
            int r = q[1];

            int count = prefix[r];

            if (l > 0) {
                count -= prefix[l - 1];
            }

            ans.push_back(count);
        }

        return ans;
    }
};
