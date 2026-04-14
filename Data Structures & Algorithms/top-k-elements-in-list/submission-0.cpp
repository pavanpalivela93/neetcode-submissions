class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int> map;
        for(int num: nums){
            map[num]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> heap;
        for(const auto& pair: map){
            heap.push({pair.second, pair.first});
            if(heap.size() > k){
                heap.pop();
            }
        }

        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(heap.top().second);
            heap.pop();
        }
        return res;
    }
};
