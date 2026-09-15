class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, int> comp;
        for ( char element : s ) comp[element]++;
        for ( char element : t ) comp[element]--;

        for (auto &[k, v] : comp){
            if(v != 0) return false;
        }
        return true;
    }

};
