class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxcapacity = 0;
        int left = 0;
        int right = heights.size() - 1;

        while(left < right){
            int capacity = (right - left) * min(heights[left], heights[right]);
            if(heights[left] < heights[right]) left++;
            else right--;
            maxcapacity = max(maxcapacity, capacity);
        }
        return maxcapacity;
    }
};
