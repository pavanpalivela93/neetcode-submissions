class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        vector<int> pref(n);
        vector<int> sufx(n);

        pref[0] = 1;
        sufx[n-1] = 1;

        for(int i = 1; i < n; i++){
            pref[i] = nums[i - 1] * pref[i - 1];
        }

        for(int i = n - 2; i >= 0; i--){
            sufx[i] = nums[i + 1] * sufx[i + 1];
        }

        for(int i = 0; i < n; i++){
            res[i] = pref[i] * sufx[i];
        }

        return res;
    }
};
