class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int even = 0;
        for(int i=0; i<n; i++){
            int digit = nums[i];
            int count = 0;
            while(digit != 0){
                digit = digit / 10;
                count++;
            }
            if(count % 2 == 0){
               even++;
            }
        }
        return even;
    }
};