class Solution {
public:
    int minMoves(vector<int>& nums) {
       int minimum = *min_element(nums.begin(), nums.end());
        long long sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum +=nums[i] - minimum ;
        }
        return sum;
    }
};