class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int n= heights.size();
        vector<int> right(n,0);
        vector<int> left(n,0);

        //for right smaller
        for(int i=n-1; i>=0; i--){
            while(s.size()>0 && heights[s.top()] >= heights[i]){
                s.pop();
            }
            if(s.empty()){
                right[i] = n;
            }else{
                right[i] = s.top();
            }
            s.push(i);
        }

        while(!s.empty()){
            s.pop();
        }

        //for left smaller
        for(int i=0; i<n; i++){
            while(s.size()>0 && heights[s.top()] >= heights[i]){
                s.pop();
            }
             if(s.empty()){
                left[i] = -1;
            }else{
                left[i] = s.top();
            }
            s.push(i);

        }
        int ans = 0;
        for(int i=0; i<n; i++){
            int width = right[i] - left[i] - 1;
            int area = heights[i] * width;
            ans = max(ans, area);
        }
        return ans;
    }
};