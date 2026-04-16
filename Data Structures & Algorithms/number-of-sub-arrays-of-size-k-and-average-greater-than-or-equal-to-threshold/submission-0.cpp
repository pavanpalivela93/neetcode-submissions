class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        threshold *= k;
        int res = 0, currSum = 0;

        for(int i = 0; i < arr.size(); i++){
            currSum += arr[i];
            if(i >= k - 1){
                if(currSum >= threshold){
                    res++;
                }
                currSum -= arr[i - k + 1];
            }
        }
        return res;
    }
};