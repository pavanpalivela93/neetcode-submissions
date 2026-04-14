class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> output;
        for(int i = 0 ; i < nums.size(); i++){
            map[nums[i]] = i; 
        }
        for(int i = 0 ; i < nums.size(); i++){
            int rem = target - nums[i];
            if(map.find(rem) != map.end() && i != map[rem]){
                output.push_back(i);
                output.push_back(map[rem]);
                break;
            }
        }
        return output;
    }
};
