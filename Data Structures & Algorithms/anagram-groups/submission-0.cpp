class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for(string &s : strs){
            string key = s;
            sort(key.begin(), key.end());
            groups[key].push_back(s);
        }

        vector<vector<string>> output;

        for(auto &[str, group] : groups) {
            output.push_back(group);
        }
        return output;
    }
};
