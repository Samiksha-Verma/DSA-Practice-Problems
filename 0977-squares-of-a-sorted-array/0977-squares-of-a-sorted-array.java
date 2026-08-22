class Solution {
    public int[] sortedSquares(int[] nums) {
        int n=nums.length;
        int l=0, r=n-1; 
        int[] result = new int[nums.length];
        for(int i=n-1; i>=0; i--){
          int  leftnum = nums[l] * nums[l];
           int rightnum = nums[r] * nums[r];

            if(leftnum > rightnum) {
                result[i] = leftnum;
                l++;
            }
            else {
                result[i] = rightnum;
                r--;
            }
        }
       
        return result;
    }
}