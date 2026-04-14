class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero_count = 0;
        int product = 1;
        vector<int> res(nums.size(), 0);
        for(int val: nums){
            if(val != 0) product = product * val;
            else zero_count++;
        }

        if(zero_count > 1) return res;

        for(int i = 0; i < nums.size(); i++){
            if(zero_count > 0){
                res[i] = nums[i] == 0 ? product : 0;
            }
            else{
                res[i] = product / nums[i];
            }
        }
        return res;
    }
};
