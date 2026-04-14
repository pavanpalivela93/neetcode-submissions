class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> res;

        for(string str : strs){
            vector<int> count(26, 0);
            for(char ch: str){
                count[ch - 'a']++;
            }

            string key = to_string(count[0]);
            for(int i = 1; i < count.size(); i++){
                key += count[i];
            }
            map[key].push_back(str);
        }

        for(const auto& pair: map){
            res.push_back(pair.second);
        }
        return res;
    }
};
