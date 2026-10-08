class Solution {
public:
    int countWays(vector<vector<int>>& ranges) {
        sort(ranges.begin(), ranges.end());
        long long MOD = 1e9 + 7;
        int group = 1;
        int end = ranges[0][1];

        for(int i=1; i<ranges.size(); i++){
            if(ranges[i][0] > end){
                group++;
            }
            end = max(end, ranges[i][1]);
        }

         long long ans = 1;

        for (int i = 0; i < group; i++) {
            ans = (ans * 2) % MOD;
        }

        return ans;
    }
};