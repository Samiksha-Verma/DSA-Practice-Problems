class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                mp[nums[i]] = 1;
            }
        }
        int expect = 1;
        for(auto x : mp){
            if(x.first != expect){
                return expect;   
            }  
              expect++;   
        }
        return expect;
    }
};