class Solution {
public:

   bool isPalindrom(string s, int left, int right){
    while(left < right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right--;
        
    }
    return true;
   }

    bool validPalindrome(string s) {
        int n=s.size();
        int l=0, r=n-1, del=1;
       
       while(l<r){
        if(s[l] != s[r]){
           
            return isPalindrom(s, l+1, r) || isPalindrom(s, l, r-1);
        }
        l++;
        r--;
       }
       return true;
    }
};