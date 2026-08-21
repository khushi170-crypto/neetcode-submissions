class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq;
        if(t.length() != s.length()){
            return false;
        }
        for(int i = 0;i < s.length();i++){
             freq[s[i]]++;
             freq[t[i]]--;
            if (freq[s[i]] == 0){
                freq.erase(s[i]);
            }
             if (freq[t[i]] == 0){
                freq.erase(t[i]);
            }
        }
        return freq.empty();
    }
};
