class Solution {
    public int removeElement(int[] nums, int val) {
        int l=0, r=0,k=0;
        while(r<nums.length){
            if(nums[r] == val){
                r++;
            }
            else if(nums[r] != val){
                nums[l] = nums[r];
                l++;
                r++;
                k++;
            }
        }
        return k;
    }
}