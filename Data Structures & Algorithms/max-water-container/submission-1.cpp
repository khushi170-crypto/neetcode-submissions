class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0;
        int left = 0;
        int right = heights.size()-1;
        while(left < right){
            int currentArea = (right - left) * min(heights[left],heights[right]);
            maxArea = max(maxArea , currentArea);
            int height1= heights[left];
            int height2 = heights[right];

            
           if ( height1 < height2){
                 left++;
                 while(left < right && heights[left]< height1 ){
                    left++;
                 }
            }
            else{
                right--;
                while(left < right && heights[right] < height2){
                    right--;
                }
            }
        }
        return maxArea;
    }
};
