class Solution {
public:
    int trap(vector<int>& height) {
        int res = 0 , leftMax = 0, rightMax = 0, left = 0, right = height.size() - 1;

        while(left < right){
            if(height[left] < height[right]){
                leftMax = max(leftMax, height[left]);
                res += leftMax - height[left];
                left++;
            }
            else{
                rightMax = max(rightMax, height[right]);
                res += rightMax - height[right];
                right--;
            }
        }
        return res;
    }
};
