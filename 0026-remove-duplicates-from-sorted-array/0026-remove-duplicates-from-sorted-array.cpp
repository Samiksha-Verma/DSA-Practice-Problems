class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, j=1, n = nums.size(), k=1;
        if(n == 1) return k;
        while(j<n){
            if(nums[j] == nums[i]){
                j++;
            }else{
                i++;
                swap(nums[j], nums[i]);
                k++;
                j++;
            }
        }
    return k;
    }
        
};