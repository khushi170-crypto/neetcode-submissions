class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int element : nums){
            freq[element]++;
        }
        vector<vector<int>>ans(nums.size()+1);
        for(auto it : freq){
            ans[it.second].push_back(it.first);
        }
        vector<int> result;
        for(int i = ans.size()-1 ; i >= 1 ; i--){
            for(int element : ans[i]){
                result.push_back(element);
                if(result.size() == k){
                    return result;
                }
            }
        }
    }
};
