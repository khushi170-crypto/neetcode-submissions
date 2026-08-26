class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<vector<int>,vector<string>>mapa;
        for(int i = 0 ; i < strs.size() ; i++){
            vector<int>alphabet(26,0);
            for(char ch : strs[i]){
                alphabet[ch - 'a'] += 1;
            }
            mapa[alphabet].push_back(strs[i]);
        }
        for(auto it : mapa){
            ans.push_back(it.second);
        }
        return ans;
    }
};
